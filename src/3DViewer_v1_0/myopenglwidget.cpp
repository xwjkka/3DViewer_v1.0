#include "myopenglwidget.h"

#include <QOpenGLWidget>
#include <QSettings>
#include <QtWidgets>

MyOpenGLWidget::MyOpenGLWidget(QWidget *parent) : QOpenGLWidget{parent} {
  axis_check = 0;
  ptr_obj1 = NULL;
  set = new QSettings("launch_settings.init", QSettings::IniFormat);
}

void MyOpenGLWidget::on_SelectFileButton_clicked() {
  QString f_name;

  QString filename = QFileDialog::getOpenFileName(this, "Choose File");

  QByteArray ba = filename.toLocal8Bit();
  const char *filename_c = ba.data();
  ptr_obj1 = &obj1;
  core_parser(filename_c, ptr_obj1);
  set_in_center(ptr_obj1);
  f_name = filename.split('/').last();

  emit send_info(ptr_obj1->count_of_vertexes, ptr_obj1->count_of_polygons,
                 f_name);
  update();
}

void MyOpenGLWidget::on_checkAxes_clicked() {
  if (axis_check != 0)
    axis_check += 1;
  else
    axis_check -= 1;
  update();
}

void MyOpenGLWidget::initializeGL() {}

void MyOpenGLWidget::resizeGL(int w, int h) {}

void MyOpenGLWidget::paintGL() {
  background_color = set->value("backgroundColor").toString();
  if (background_color == "Red")
    glClearColor(1, 0.0, 0.0, 0.0);
  else if (background_color == "Green")
    glClearColor(0, 1, 0.0, 0.0);
  else if (background_color == "Blue")
    glClearColor(0, 0.0, 1, 0.0);
  else if (background_color == "Yellow")
    glClearColor(1, 1, 0.0, 0);
  else if (background_color == "Pink")
    glClearColor(1, 0, 1, 0);
  else if (background_color == "White")
    glClearColor(1, 1, 1, 1);
  else
    glClearColor(0, 0.0, 0.0, 0.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  projection_type = set->value("projection").toString();
  if (projection_type == "Central")
    glFrustum(-2, +2, -2, +2, 5.0, 15.0);
  else
    glOrtho(-2, +2, -2, +2, 1.0, 15.0);
  glMatrixMode(GL_MODELVIEW);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glLoadIdentity();
  glTranslatef(0.0, 0.0, -7.0);
  glRotatef(xRot / 16.0, 1.0, 0.0, 0.0);
  glRotatef(yRot / 16.0, 0.0, 1.0, 0.0);
  glRotatef(zRot / 16.0, 0.0, 0.0, 1.0);
  if (ptr_obj1 != NULL) {
    drawLines();
    vertex_display = set->value("vertexDisplay").toString();
    if (vertex_display != "None") drawPoints();
  }
  if (axis_check != 0) drawAxis();
}
void MyOpenGLWidget::drawLines() {
  line_color = set->value("lineColor").toString();
  if (line_color == "Red")
    glColor3d(1, 0, 0);
  else if (line_color == "Green")
    glColor3d(0, 1, 0);
  else if (line_color == "Blue")
    glColor3d(0, 0, 1);
  else
    glColor3d(1, 1, 1);
  line_type = set->value("lineType").toString();
  if (line_type == "Dashed") {
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(1, 0X00FF);
  } else
    glDisable(GL_LINE_STIPPLE);
  line_width = set->value("lineWidth").toInt();
  glLineWidth(line_width);
  for (int i = 1; i < ptr_obj1->count_of_polygons + 1; i++) {
    for (int j = 0;
         j < ptr_obj1->array_of_polygon[i].numbers_of_vertexes_for_polygon;
         j++) {
      glBegin(GL_LINE_LOOP);
      glVertex3d(ptr_obj1->matrix_of_vertexes
                     .matrix[ptr_obj1->array_of_polygon[i].vertexes[j]][0],
                 ptr_obj1->matrix_of_vertexes
                     .matrix[ptr_obj1->array_of_polygon[i].vertexes[j]][1],
                 ptr_obj1->matrix_of_vertexes
                     .matrix[ptr_obj1->array_of_polygon[i].vertexes[j]][2]);
    }
    glEnd();
  }
}

void MyOpenGLWidget::drawPoints() {
  vertex_color = set->value("vertexColor").toString();
  if (vertex_color == "Red")
    glColor3d(1, 0, 0);
  else if (vertex_color == "Green")
    glColor3d(0, 1, 0);
  else if (vertex_color == "Blue")
    glColor3d(0, 0, 1);
  else
    glColor3d(1, 1, 1);

  glEnable(GL_BLEND);
  if (vertex_display == "Square")
    glDisable(GL_POINT_SMOOTH);
  else
    glEnable(GL_POINT_SMOOTH);
  vertex_size = set->value("vertexSize").toInt();
  glEnable(GL_PROGRAM_POINT_SIZE);
  glPointSize(vertex_size);
  for (int i = 1; i < ptr_obj1->count_of_polygons + 1; i++) {
    for (int j = 0;
         j < ptr_obj1->array_of_polygon[i].numbers_of_vertexes_for_polygon;
         j++) {
      glBegin(GL_POINTS);
      glVertex3d(ptr_obj1->matrix_of_vertexes
                     .matrix[ptr_obj1->array_of_polygon[i].vertexes[j]][0],
                 ptr_obj1->matrix_of_vertexes
                     .matrix[ptr_obj1->array_of_polygon[i].vertexes[j]][1],
                 ptr_obj1->matrix_of_vertexes
                     .matrix[ptr_obj1->array_of_polygon[i].vertexes[j]][2]);
    }
    glEnd();
  }
}

void MyOpenGLWidget::drawAxis() {
  glColor3d(1, 0, 1);
  glBegin(GL_LINE_LOOP);
  glVertex3d(2, 0, 0);
  glVertex3d(-2, 0, 0);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glVertex3d(0, 2, 0);
  glVertex3d(0, -2, 0);
  glEnd();
  glBegin(GL_LINE_LOOP);
  glVertex3d(0, 0, 2);
  glVertex3d(0, 0, -2);
  glEnd();
}

static void qNormalizeAngle(int &angle) {
  while (angle < 0) angle += 360 * 16;
  while (angle > 360) angle -= 360 * 16;
}

void MyOpenGLWidget::setXRotation(int angle) {
  qNormalizeAngle(angle);
  if (angle != xRot) {
    xRot = angle;
    update();
  }
}

void MyOpenGLWidget::setYRotation(int angle) {
  qNormalizeAngle(angle);
  if (angle != yRot) {
    yRot = angle;
    update();
  }
}

void MyOpenGLWidget::setZRotation(int angle) {
  qNormalizeAngle(angle);
  if (angle != zRot) {
    zRot = angle;
    update();
  }
}

void MyOpenGLWidget::on_transformButton_clicked2(double transform_data[3][3]) {
  s21_affine_transform(transform_data, ptr_obj1);
  update();
}

void MyOpenGLWidget::mousePressEvent(QMouseEvent *event) {
  lastPos = event->pos();
}

void MyOpenGLWidget::mouseMoveEvent(QMouseEvent *event) {
  int dx = event->x() - lastPos.x();
  int dy = event->y() - lastPos.y();

  if (event->buttons() & Qt::LeftButton) {
    setXRotation(xRot + 8 * dy);
    setYRotation(yRot + 8 * dx);
  } else if (event->buttons() & Qt::RightButton) {
    setXRotation(xRot + 8 * dy);
    setZRotation(zRot + 8 * dx);
  }

  lastPos = event->pos();
}

void MyOpenGLWidget::on_applySettingsButton_clicked(
    QMap<QString, QString> map) {
  projection_type = map["projection"];
  line_type = map["line_type"];
  line_color = map["line_color"];
  line_width = map["line_width"].toInt();
  vertex_color = map["vertex_color"];
  vertex_size = map["vertex_size"].toInt();
  vertex_display = map["vertex_display"];
  background_color = map["background_color"];
  set->setValue("projection", map["projection"]);
  set->setValue("lineType", map["line_type"]);
  set->setValue("lineColor", map["line_color"]);
  set->setValue("lineWidth", map["line_width"]);
  set->setValue("vertexColor", map["vertex_color"]);
  set->setValue("vertexSize", map["vertex_size"]);
  set->setValue("vertexDisplay", map["vertex_display"]);
  set->setValue("backgroundColor", map["background_color"]);
  update();
}
