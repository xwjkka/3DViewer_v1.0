/*!
 * @file 3D_viewer.c
 * @author hodorsta
 * @brief парсер файла для записи координат полигона
 * @version 1.0
 */
#include "3D_viewer.h"

/*!
 @brief - основная функция парсера
 @param file_name - строка с именем открываемого файла
 @param viewer - структура для записи координат вершин и полигонов
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int core_parser(const char *file_name, data_t *viewer) {
  int status = OK;
  init(viewer);
  status = first_read_parser(file_name, viewer);
  status = create_matrix_of_vertexes(viewer);
  status = polygon_memory_allocation(viewer);
  status = second_read_parser(file_name, viewer);
  return status;
}

/*!
 @brief - функция корректирует начальное положение точек полигонов
 @param viewer - структура для записи координат вершин и полигонов
 */
void set_in_center(data_t *viewer) {
  double zoom = (1.5 - (1.5 * (-1))) / fmax(fmax((viewer->maxX - viewer->minX),
                                                 (viewer->maxY - viewer->minY)),
                                            (viewer->maxZ - viewer->minZ));
  double center_x = viewer->minX + (viewer->maxX - viewer->minX) / 2.0;
  double center_y = viewer->minY + (viewer->maxY - viewer->minY) / 2.0;
  double center_z = viewer->minZ + (viewer->maxZ - viewer->minZ) / 2.0;
  for (unsigned int i = 1; i <= viewer->count_of_vertexes; i++) {
    viewer->matrix_of_vertexes.matrix[i][0] =
        (viewer->matrix_of_vertexes.matrix[i][0] - center_x) * zoom;
    viewer->matrix_of_vertexes.matrix[i][1] =
        (viewer->matrix_of_vertexes.matrix[i][1] - center_y) * zoom;
    viewer->matrix_of_vertexes.matrix[i][2] =
        (viewer->matrix_of_vertexes.matrix[i][2] - center_z) * zoom;
  }
}

/*!
 @brief - функция обнуления структуры
 @param viewer - структура для записи координат вершин и полигонов
 */
void init(data_t *viewer) {
  viewer->count_of_polygons = 0;
  viewer->count_of_vertexes = 0;
  viewer->matrix_of_vertexes.columns = 0;
  viewer->matrix_of_vertexes.rows = 0;
  viewer->matrix_of_vertexes.matrix = NULL;
  viewer->array_of_polygon = NULL;
  viewer->minX = DBL_MAX;
  viewer->minY = DBL_MAX;
  viewer->minZ = DBL_MAX;
  viewer->maxX = DBL_MIN;
  viewer->maxY = DBL_MIN;
  viewer->maxZ = DBL_MIN;
}

/*!
 @brief - функция первого прочтения файла
 @param file_name - строка с именем открываемого файла
 @param viewer - структура для записи координат вершин и полигонов
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int first_read_parser(const char *file_name, data_t *viewer) {
  int status = OK;
  FILE *f = fopen(file_name, "r");
  char *line = NULL;
  size_t len = 0;
  if (f != NULL) {
    while (getline(&line, &len, f) != -1) {
      if (strncmp(line, "v ", 2) == 0) viewer->count_of_vertexes++;
      if (strncmp(line, "f ", 2) == 0) viewer->count_of_polygons++;
    }
    free(line);
  } else {
    status = ERROR;
  }
  fclose(f);
  return status;
}

/*!
 @brief - функция второго прочтения файла
 @param file_name - строка с именем открываемого файла
 @param viewer - структура для записи координат вершин и полигонов
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int second_read_parser(const char *file_name, data_t *viewer) {
  int status = OK;
  FILE *f = fopen(file_name, "r");
  char *line = NULL;
  char ch;
  size_t len = 0;
  if (f != NULL) {
    int i = 1, j = 1;
    while (getline(&line, &len, f) != -1) {
      if (strncmp(line, "v ", 2) == 0) {
        sscanf(line, "%c %lf %lf %lf", &ch,
               &viewer->matrix_of_vertexes.matrix[i][0],
               &viewer->matrix_of_vertexes.matrix[i][1],
               &viewer->matrix_of_vertexes.matrix[i][2]);
        min_max(viewer, i);
        i++;
      }
      if (strncmp(line, "f ", 2) == 0) {
        status = count_vertexes_for_polygon(line, viewer, j);
        status = vertexes_for_polygon_memory_allocation(viewer, j);
        status = parser_vertexes_for_polygon(line, viewer, j);
        j++;
      }
    }
    free(line);
  } else {
    status = ERROR;
  }
  fclose(f);
  return status;
}

/*!
 @brief - функция поиска минимальных и максимальных кординат вершин
 @param i - указатель на текущий номер вершины
 @param viewer - структура для записи координат вершин и полигонов
 */
void min_max(data_t *viewer, int i) {
  viewer->maxX = fmax(viewer->matrix_of_vertexes.matrix[i][0], viewer->maxX);
  viewer->maxY = fmax(viewer->matrix_of_vertexes.matrix[i][1], viewer->maxY);
  viewer->maxZ = fmax(viewer->matrix_of_vertexes.matrix[i][2], viewer->maxZ);
  viewer->minX = fmin(viewer->matrix_of_vertexes.matrix[i][0], viewer->minX);
  viewer->minY = fmin(viewer->matrix_of_vertexes.matrix[i][1], viewer->minY);
  viewer->minZ = fmin(viewer->matrix_of_vertexes.matrix[i][2], viewer->minZ);
}

/*!
 @brief - функция записи номеров вершин для образования полигона
 @param str - строка с номерами вершин для образования полигона
 @param viewer - структура для записи координат вершин и полигонов
 @param j - указатель на текущий номер полигона
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int parser_vertexes_for_polygon(char *str, data_t *viewer, int j) {
  int status = OK;
  char *tmp = calloc(strlen(str) + 1, sizeof(char));
  if (!tmp) {
    status = ERROR;
  } else {
    strncpy(tmp, str, (int)strlen(str) + 1);
    char *sep_str = strtok(tmp, " ");
    int e = 0;
    unsigned int vertex = 0;
    while (sep_str != NULL) {
      if ((vertex = atof(sep_str)) != 0) {
        viewer->array_of_polygon[j].vertexes[e] = vertex;
        e++;
      }
      sep_str = strtok(NULL, " ");
    }
    free(tmp);
  }
  return status;
}

/*!
 @brief - функция подсчета количества номеров вершин для образования полигона
 @param str - строка с номерами вершин для образования полигона
 @param viewer - структура для записи координат вершин и полигонов
 @param j - указатель на текущий номер полигона
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int count_vertexes_for_polygon(char *str, data_t *viewer, int j) {
  int status = OK;
  char *tmp = calloc(strlen(str) + 1, sizeof(char));
  if (!tmp) {
    status = ERROR;
  } else {
    strncpy(tmp, str, (int)strlen(str) + 1);
    char *sep_str = strtok(tmp, " ");
    unsigned int count = 0;
    while (sep_str != NULL) {
      count++;
      sep_str = strtok(NULL, " ");
    }
    viewer->array_of_polygon[j].numbers_of_vertexes_for_polygon = count - 1;
    free(tmp);
  }
  return status;
}

/*!
 @brief - функция выделения памяти под двумерный массив координат вершин
 @param viewer - структура для записи координат вершин и полигонов
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int create_matrix_of_vertexes(data_t *viewer) {
  int status = OK;
  viewer->matrix_of_vertexes.columns = 3;
  viewer->matrix_of_vertexes.rows = viewer->count_of_vertexes + 1;
  viewer->matrix_of_vertexes.matrix =
      calloc(viewer->matrix_of_vertexes.rows, sizeof(double *));
  if (!viewer->matrix_of_vertexes.matrix) {
    status = ERROR;
  } else {
    for (unsigned int i = 0; i < viewer->matrix_of_vertexes.rows; i++) {
      viewer->matrix_of_vertexes.matrix[i] =
          calloc(viewer->matrix_of_vertexes.columns, sizeof(double));
      if (!viewer->matrix_of_vertexes.matrix[i]) {
        for (unsigned int j = 0; j < i; j++) {
          free(viewer->matrix_of_vertexes.matrix[i]);
        }
        free(viewer->matrix_of_vertexes.matrix);
        status = ERROR;
      }
    }
  }
  return status;
}

/*!
 @brief - функция выделения памяти под массив полигонов
 @param viewer - структура для записи координат вершин и полигонов
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int polygon_memory_allocation(data_t *viewer) {
  int status = OK;
  viewer->array_of_polygon =
      calloc(viewer->count_of_polygons + 1, sizeof(polygon_t));
  if (!viewer->array_of_polygon) status = ERROR;
  return status;
}

/*!
 @brief - функция выделения памяти под массив номеров вершин для создания
 полигонов
 @param viewer - структура для записи координат вершин и полигонов
 @param j - указатель на текущий номер полигона
 @return статус 0 - в случае успеха, 1 - в случае ошибки
 */
int vertexes_for_polygon_memory_allocation(data_t *viewer, int j) {
  int status = OK;
  viewer->array_of_polygon[j].vertexes =
      calloc(viewer->array_of_polygon[j].numbers_of_vertexes_for_polygon,
             sizeof(unsigned int));
  if (!viewer->array_of_polygon[j].vertexes) status = ERROR;
  return status;
}

/*!
 @brief - функция очищения памяти структуры
 @param viewer - структура для записи координат вершин и полигонов
 */
void free_data_t_memory(data_t *viewer) {
  for (unsigned int i = 0; i < viewer->matrix_of_vertexes.rows; i++) {
    free(viewer->matrix_of_vertexes.matrix[i]);
  }
  free(viewer->matrix_of_vertexes.matrix);
  viewer->matrix_of_vertexes.columns = 0;
  viewer->matrix_of_vertexes.rows = 0;
  for (unsigned int i = 1; i < viewer->count_of_polygons + 1; i++) {
    free(viewer->array_of_polygon[i].vertexes);
  }
  free(viewer->array_of_polygon);
  viewer->count_of_vertexes = 0;
  viewer->count_of_polygons = 0;
}