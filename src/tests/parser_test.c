#include "test.h"

START_TEST(test_1) {
  char *file_name = "no_file.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 1);
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(test_2) {
  char *file_name = "obj_models/Wolf_obj.obj";
  data_t viewer;
  int err = core_parser(file_name, &viewer);
  unsigned int expect_count_of_vertexes = 1690;
  unsigned int expect_count_of_polygons = 1566;
  ck_assert_uint_eq(expect_count_of_polygons, viewer.count_of_polygons);
  ck_assert_uint_eq(expect_count_of_vertexes, viewer.count_of_vertexes);
  ck_assert_int_eq(err, 0);
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(test_3) {
  char *file_name = "no_file.obj";
  data_t viewer = {0};
  int err_1 = first_read_parser(file_name, &viewer);
  int err_2 = second_read_parser(file_name, &viewer);
  ck_assert_int_eq(err_1, 1);
  ck_assert_int_eq(err_2, 1);
  //   free_data_t_memory(&viewer);
}

START_TEST(test_4) {
  data_t viewer = {0};
  char str[] = "f 567/298/1460 572/300/1461 570/299/1462 569/294/1456";
  unsigned int vert[4] = {567, 572, 570, 569};
  int j = 1;
  viewer.count_of_polygons = 1;
  int err = polygon_memory_allocation(&viewer);
  int err_1 = count_vertexes_for_polygon(str, &viewer, j);
  int err_2 = vertexes_for_polygon_memory_allocation(&viewer, j);
  int err_3 = parser_vertexes_for_polygon(str, &viewer, j);
  unsigned int expect_numbers_of_vertexes_for_polygon = 4;
  ck_assert_uint_eq(expect_numbers_of_vertexes_for_polygon,
                    viewer.array_of_polygon[j].numbers_of_vertexes_for_polygon);
  for (unsigned int i = 0; i < 4; i++) {
    ck_assert_uint_eq(vert[i], viewer.array_of_polygon[j].vertexes[i]);
  }
  ck_assert_int_eq(err, 0);
  ck_assert_int_eq(err_1, 0);
  ck_assert_int_eq(err_2, 0);
  ck_assert_int_eq(err_3, 0);
  free_data_t_memory(&viewer);
}

START_TEST(test_5) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(0, err);
  int k = 0;
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    for (unsigned int j = 0; j < viewer.matrix_of_vertexes.columns; ++j) {
      k++;
    }
  }
  double matrix[8][3] = {
      {1.000000, -1.000000, -1.000000}, {1.000000, -1.000000, 1.000000},
      {-1.000000, -1.000000, 1.000000}, {-1.000000, -1.000000, -1.000000},
      {1.000000, 1.000000, -0.999999},  {0.999999, 1.000000, 1.000001},
      {-1.000000, 1.000000, 1.000000},  {-1.000000, 1.000000, -1.000000}};
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    for (unsigned int j = 0; j < viewer.matrix_of_vertexes.columns; ++j) {
      ck_assert_double_eq(viewer.matrix_of_vertexes.matrix[i][j],
                          matrix[i - 1][j]);
    }
  }
  ck_assert_int_eq(8 * 3, k);
  free_data_t_memory(&viewer);
}
END_TEST

END_TEST
Suite *parser_test(void) {
  Suite *s = suite_create("\033[45m-=PARSER_TEST=-\033[0m");
  TCase *tc = tcase_create("parser_test_tc");

  tcase_add_test(tc, test_1);
  tcase_add_test(tc, test_2);
  tcase_add_test(tc, test_3);
  tcase_add_test(tc, test_4);
  tcase_add_test(tc, test_5);

  suite_add_tcase(s, tc);
  return s;
}
