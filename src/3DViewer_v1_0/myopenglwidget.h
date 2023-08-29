#ifndef MYOPENGLWIDGET_H
#define MYOPENGLWIDGET_H

#include <QImage>
#include <QOpenGLWidget>
#include <QSettings>

#include "qgifimage.h"

extern "C" {
#include "../c_core/3D_viewer.h"
}

class MyOpenGLWidget : public QOpenGLWidget {
  Q_OBJECT
 public:
  struct data obj1;
  struct data *ptr_obj1;
  void drawLines();
  void drawPoints();
  void drawAxis();
  MyOpenGLWidget(QWidget *parent = nullptr);

 public slots:
  void setXRotation(int angle);
  void setYRotation(int angle);
  void setZRotation(int angle);
  void on_transformButton_clicked2(double transform_data[3][3]);
  void on_SelectFileButton_clicked();
  void on_checkAxes_clicked();
  void on_applySettingsButton_clicked(QMap<QString, QString> map);

 signals:
  void send_info(int vertices_count, int polygons_count, QString f_name);

 protected:
  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);

 private:
  QString projection_type;
  QString line_type;
  QString line_color;
  int line_width;
  QString vertex_color;
  QString vertex_display;
  int vertex_size;
  int axis_check;
  QString background_color;
  QSettings *set;
  int xRot;
  int yRot;
  int zRot;
  QPoint lastPos;
};

#endif  // MYOPENGLWIDGET_H
