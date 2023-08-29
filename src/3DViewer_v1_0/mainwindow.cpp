
#include "mainwindow.h"

#include <QtWidgets>

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  set = new QSettings("launch_settings.init", QSettings::IniFormat);
  connect(ui->widget, &MyOpenGLWidget::send_info, this,
          &MainWindow::receiveInfo);
  connect(this, &MainWindow::signal_data, ui->widget,
          &MyOpenGLWidget::on_transformButton_clicked2);
  connect(this, &MainWindow::signal_settings, ui->widget,
          &MyOpenGLWidget::on_applySettingsButton_clicked);
  ui->projectionBox->setCurrentText(set->value("projection").toString());
  ui->lineBox->setCurrentText(set->value("lineType").toString());
  ui->lineColorBox->setCurrentText(set->value("lineColor").toString());
  ui->lineWidthBox->setValue(set->value("lineWidth").toInt());
  ui->vertexColorBox->setCurrentText(set->value("vertexColor").toString());
  ui->vertexDisplayBox->setCurrentText(set->value("vertexDisplay").toString());
  ui->vertexSizeBox->setValue(set->value("vertexSize").toInt());
  ui->backgroundColorBox->setCurrentText(
      set->value("backgroundColor").toString());
}

void MainWindow::receiveInfo(int vertices_count, int polygons_count,
                             QString f_name) {
  ui->vertices->setText(QString::number(vertices_count));
  ui->polygons->setText(QString::number(polygons_count));
  ui->fileName->setText(f_name);
  update();
}
void MainWindow::on_transformButton_clicked() {
  double transform_data[3][3] = {
      {ui->doubleSpinBox->value(), ui->doubleSpinBox_2->value(),
       ui->doubleSpinBox_3->value()},
      {ui->doubleSpinBox_4->value(), ui->doubleSpinBox_5->value(),
       ui->doubleSpinBox_6->value()},
      {ui->doubleSpinBox_7->value(), 0, 0}};
  emit signal_data(transform_data);
}

void MainWindow::on_applySettings_clicked() {
  QMap<QString, QString> map;
  map["projection"] = ui->projectionBox->currentText();
  map["line_type"] = ui->lineBox->currentText();
  map["line_color"] = ui->lineColorBox->currentText();
  map["line_width"] = QString::number(ui->lineWidthBox->value());
  map["vertex_color"] = ui->vertexColorBox->currentText();
  map["vertex_display"] = ui->vertexDisplayBox->currentText();
  map["vertex_size"] = QString::number(ui->vertexSizeBox->value());
  map["background_color"] = ui->backgroundColorBox->currentText();
  emit signal_settings(map);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_saveImage_clicked() {
  QString save = NULL;
  save = QFileDialog::getSaveFileName(this, NULL, NULL,
                                      "JPEG (*.jpeg) ;; BMP (*.bmp)");
  if (!save.isNull()) ui->widget->grabFramebuffer().save(save, NULL, 100);
}

void MainWindow::on_recordScreencast_clicked() {
  gif = new QGifImage;
  frame = new QImage;
  timer = new QTimer(this);
  count = 0;
  connect(timer, SIGNAL(timeout()), this, SLOT(save()));
  timer->start(50);
}

void MainWindow::save() {
  count++;
  *frame = ui->widget->grabFramebuffer();
  gif->addFrame(*frame);
  if (count == 50) {
    timer->stop();
    QString save = NULL;
    save = QFileDialog::getSaveFileName(this, NULL, NULL, "GIF (*.gif)");
    if (!save.isNull()) gif->save(save);
  }
}
