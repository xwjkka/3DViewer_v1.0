/*!
 * @file affine_tr.c
 * @author jeannakr
 * @brief реализация афинных преобразований
 * @version 1.0
 */
#include "3D_viewer.h"

// перемещения

/*!
 @brief - функция перемещения модели по оси Х
 @param data - структура с координатами вершин и полигонов
 @param a - значение, на которое перемещается фигура
 */
void s21_moving_x(data_t *data, double a) {
  for (unsigned int i = 1; i < data->matrix_of_vertexes.rows; ++i)
    data->matrix_of_vertexes.matrix[i][0] += a;
}

/*!
 @brief - функция перемещения модели по оси Y
 @param data - структура с координатами вершин и полигонов
 @param a - значение, на которое перемещается фигура
 */
void s21_moving_y(data_t *data, double a) {
  for (unsigned int i = 1; i < data->matrix_of_vertexes.rows; ++i)
    data->matrix_of_vertexes.matrix[i][1] += a;
}

/*!
 @brief - функция перемещения модели по оси Z
 @param data - структура с координатами вершин и полигонов
 @param a - значение, на которое перемещается фигура
 */
void s21_moving_z(data_t *data, double a) {
  for (unsigned int i = 1; i < data->matrix_of_vertexes.rows; ++i)
    data->matrix_of_vertexes.matrix[i][2] += a;
}

// повороты

/*!
 @brief - функция вращения модели относительно оси Х
 @param data - структура с координатами вершин и полигонов
 @param a - угол, на который поворачивается фигура
 */
void s21_rotation_x(data_t *data, double a) {
  for (unsigned int i = 1; i < data->matrix_of_vertexes.rows; ++i) {
    double temp_y = data->matrix_of_vertexes.matrix[i][1];
    double temp_z = data->matrix_of_vertexes.matrix[i][2];
    data->matrix_of_vertexes.matrix[i][1] = cos(a) * temp_y - sin(a) * temp_z;
    data->matrix_of_vertexes.matrix[i][2] = sin(a) * temp_y + cos(a) * temp_z;
  }
}

/*!
 @brief - функция вращения модели относительно оси Y
 @param data - структура с координатами вершин и полигонов
 @param a - угол, на который поворачивается фигура
 */
void s21_rotation_y(data_t *data, double a) {
  for (unsigned int i = 1; i < data->matrix_of_vertexes.rows; ++i) {
    double temp_x = data->matrix_of_vertexes.matrix[i][0];
    double temp_z = data->matrix_of_vertexes.matrix[i][2];
    data->matrix_of_vertexes.matrix[i][0] = cos(a) * temp_x + sin(a) * temp_z;
    data->matrix_of_vertexes.matrix[i][2] = -sin(a) * temp_x + cos(a) * temp_z;
  }
}

/*!
 @brief - функция вращения модели относительно оси Z
 @param data - структура с координатами вершин и полигонов
 @param a - угол, на который поворачивается фигура
 */
void s21_rotation_z(data_t *data, double a) {
  for (unsigned int i = 1; i < data->matrix_of_vertexes.rows; ++i) {
    double temp_x = data->matrix_of_vertexes.matrix[i][0];
    double temp_y = data->matrix_of_vertexes.matrix[i][1];
    data->matrix_of_vertexes.matrix[i][0] = cos(a) * temp_x - sin(a) * temp_y;
    data->matrix_of_vertexes.matrix[i][1] = sin(a) * temp_x + cos(a) * temp_y;
  }
}

// масштабированиe

/*!
 @brief - функция для масштабирования модели
 @param data - структура с координатами вершин и полигонов
 @param a - значение, на которое масштабируется фигура
 */
void s21_scaling(data_t *data, double a) {
  if (a > 0) {
    for (unsigned int i = 1; i < data->matrix_of_vertexes.rows; ++i) {
      for (unsigned int j = 0; j < data->matrix_of_vertexes.columns; ++j) {
        data->matrix_of_vertexes.matrix[i][j] *= a;
      }
    }
  }
}

/*!
 @brief - основная функция афинных преобразований
 @param transform_data - массив со значениями для афинных преобразований
 @param ptr_obj1 - структура с координатами вершин и полигонов
 */
void s21_affine_transform(double transform_data[3][3], struct data *ptr_obj1) {
  s21_moving_x(ptr_obj1, transform_data[0][0]);
  s21_moving_y(ptr_obj1, transform_data[0][1]);
  s21_moving_z(ptr_obj1, transform_data[0][2]);
  s21_rotation_x(ptr_obj1, transform_data[1][0]);
  s21_rotation_y(ptr_obj1, transform_data[1][1]);
  s21_rotation_z(ptr_obj1, transform_data[1][2]);
  s21_scaling(ptr_obj1, transform_data[2][0]);
}