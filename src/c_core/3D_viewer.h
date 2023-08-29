/*!
 * @file 3D_viewer.h
 * @author hodorsta
 * @version 1.0
 */

/*!
 * @mainpage Визуализация каркасной модели в трехмерном пространстве
 * Программа загружает каркасную модель из файла формата obj и позволяет:
 * - Перемещать модель на заданное расстояние относительно осей X, Y, Z.
 * - Поворачивать модель на заданный угол относительно своих осей X, Y, Z
 * - Масштабировать модель на заданное значение
 * - Настраивать тип проекции (параллельная и центральная)
 * - Настраивать тип (сплошная, пунктирная), цвет и толщину ребер,
 * способ отображения (отсутствует, круг, квадрат), цвет и размер вершин
 * - Выбирать цвет фона
 * - Сохранять полученные ("отрендеренные") изображения в файл в форматах bmp и
 * jpeg
 * - Pаписывать небольшие "скринкасты" - текущие пользовательские аффинные
 * преобразования загруженного объекта в gif-анимацию
 */

#ifndef SRC_C_CORE_3D_VIEWER_H_
#define SRC_C_CORE_3D_VIEWER_H_

#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define OK 0
#define ERROR 1
/*!
 @brief - структура для записи определения поверхности полигона
 @param vertexes - одномерный массив с номерами вершин в полигоне
 @param numbers_of_vertexes_for_polygon - количество номеров вершин в полигоне
 */
typedef struct facets {
  unsigned int *vertexes;
  unsigned int numbers_of_vertexes_for_polygon;
} polygon_t;

/*!
 @brief - структура для записи координат вершин
 @param matrix - двумерный массив с значениями координат вершин
 @param rows - количество координат (3 штуки - x, y, z)
 @param columns - количество вершин + 1
 */
typedef struct matrix_struct {
  double **matrix;
  unsigned int rows;
  unsigned int columns;
} matrix_t;

/*!
 @brief - структура для записи координат вершин и полигонов
 @param count_of_vertexes - количество вершин
 @param count_of_polygons - количество полигонов
 @param matrix_of_vertexes - структура для записи координат вершин
 @param array_of_polygon -  структура для записи определения поверхности
 полигона
 @param minX - минимальное значение координаты Х
 @param minY - минимальное значение координаты Y
 @param minZ - минимальное значение координаты Z
 @param maxX - максимальное значение координаты Х
 @param maxY - максимальное значение координаты Y
 @param maxZ - максимальное значение координаты Z
 */
typedef struct data {
  unsigned int count_of_vertexes;
  unsigned int count_of_polygons;
  matrix_t matrix_of_vertexes;
  polygon_t *array_of_polygon;
  double minX, minY, minZ;
  double maxX, maxY, maxZ;
} data_t;

// парсер
int core_parser(const char *file_name, data_t *viewer);
int first_read_parser(const char *file_name, data_t *viewer);
int second_read_parser(const char *file_name, data_t *viewer);
int create_matrix_of_vertexes(data_t *viewer);
int polygon_memory_allocation(data_t *viewer);
void print_matrix(data_t *viewer);
int count_vertexes_for_polygon(char *str, data_t *viewer, int j);
int vertexes_for_polygon_memory_allocation(data_t *viewer, int j);
int parser_vertexes_for_polygon(char *str, data_t *viewer, int j);
void print_vertex_of_polygon(data_t *viewer);
void free_data_t_memory(data_t *viewer);
void init(data_t *viewer);
void min_max(data_t *viewer, int i);
void set_in_center(data_t *viewer);

// афинные преобразования
void s21_moving_x(data_t *data, double a);
void s21_moving_y(data_t *data, double a);
void s21_moving_z(data_t *data, double a);

void s21_rotation_x(data_t *data, double a);
void s21_rotation_y(data_t *data, double a);
void s21_rotation_z(data_t *data, double a);

void s21_scaling(data_t *data, double a);
void s21_affine_transform(double transform_data[3][3], struct data *ptr_obj1);

#endif  // SRC_C_CORE_3D_VIEWER_H_