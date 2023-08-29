#include "test.h"

START_TEST(moving_x) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);
  s21_moving_x(&viewer, 2);
  double expect_array[8] = {3.000000, 3.000000, 1.000000, 1.000000,
                            3.000000, 2.999999, 1.000000, 1.000000};
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][0],
                            expect_array[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(moving_y) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);
  s21_moving_y(&viewer, 4.5);
  double expect_array[8] = {3.500000, 3.500000, 3.500000, 3.500000,
                            5.500000, 5.500000, 5.500000, 5.500000};
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][1],
                            expect_array[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(moving_z) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);
  s21_moving_z(&viewer, -3);
  double expect_array[8] = {-4.000000, -2.000000, -2.000000, -4.000000,
                            -3.999999, -1.999999, -2.000000, -4.000000};
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][2],
                            expect_array[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(rotation_x) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);
  double a = 2;
  s21_rotation_x(&viewer, a);
  double expect_array_y[8] = {1.325444, -0.493151, -0.493151, 1.325444,
                              0.493150, -1.325445, -1.325444, 0.493151};
  double expect_array_z[8] = {-0.493151, -1.325444, -1.325444, -0.493151,
                              1.325444,  0.493150,  0.493151,  1.325444};
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_ldouble_eq_tol(viewer.matrix_of_vertexes.matrix[i][1],
                             expect_array_y[i - 1], 1e-6);
    ck_assert_ldouble_eq_tol(viewer.matrix_of_vertexes.matrix[i][2],
                             expect_array_z[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(rotation_y) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);
  double a = 2;
  s21_rotation_y(&viewer, a);
  double expect_array_x[8] = {-1.325444, 0.493151, 1.325444, -0.493151,
                              -1.325443, 0.493152, 1.325444, -0.493151};
  double expect_array_z[8] = {-0.493151, -1.325444, 0.493151, 1.325444,
                              -0.493151, -1.325444, 0.493151, 1.325444};
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_ldouble_eq_tol(viewer.matrix_of_vertexes.matrix[i][0],
                             expect_array_x[i - 1], 1e-6);
    ck_assert_ldouble_eq_tol(viewer.matrix_of_vertexes.matrix[i][2],
                             expect_array_z[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(rotation_z) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);
  double a = 2;
  s21_rotation_z(&viewer, a);
  double expect_array_x[8] = {0.493151,  0.493151,  1.325444,  1.325444,
                              -1.325444, -1.325444, -0.493151, -0.493151};
  double expect_array_y[8] = {1.325444, 1.325444, -0.493151, -0.493151,
                              0.493151, 0.493150, -1.325444, -1.325444};
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_ldouble_eq_tol(viewer.matrix_of_vertexes.matrix[i][0],
                             expect_array_x[i - 1], 1e-6);
    ck_assert_ldouble_eq_tol(viewer.matrix_of_vertexes.matrix[i][1],
                             expect_array_y[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(scaling) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);
  double expect_array_x[8] = {2.000000, 2.000000, -2.000000, -2.000000,
                              2.000000, 1.999998, -2.000000, -2.000000};
  double expect_array_y[8] = {-2.000000, -2.000000, -2.000000, -2.000000,
                              2.000000,  2.000000,  2.000000,  2.000000};
  double expect_array_z[8] = {-2.000000, 2.000000, 2.000000, -2.000000,
                              -1.999998, 2.000002, 2.000000, -2.000000};

  s21_scaling(&viewer, 2);
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][0],
                            expect_array_x[i - 1], 1e-6);
  }
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][1],
                            expect_array_y[i - 1], 1e-6);
  }
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][2],
                            expect_array_z[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

START_TEST(affine_tr) {
  char *file_name = "obj_models/cube.obj";
  data_t viewer = {0};
  int err = core_parser(file_name, &viewer);
  ck_assert_int_eq(err, 0);

  double expect_array_x[8] = {6.000000, 6.000000, 2.000000, 2.000000,
                              6.000000, 5.999998, 2.000000, 2.000000};
  double expect_array_y[8] = {0.602337, -2.763547, -2.763547, 0.602337,
                              2.763545, -0.602339, -0.602337, 2.763547};
  double expect_array_z[8] = {-2.763547, -0.602337, -0.602337, -2.763547,
                              0.602338,  2.763548,  2.763547,  0.602337};

  double transform_data[3][3] = {{2, 0, 0}, {1, 0, 0}, {2, 0, 0}};
  s21_affine_transform(transform_data, &viewer);

  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][0],
                            expect_array_x[i - 1], 1e-6);
  }
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][1],
                            expect_array_y[i - 1], 1e-6);
  }
  for (unsigned int i = 1; i < viewer.matrix_of_vertexes.rows; ++i) {
    ck_assert_double_eq_tol(viewer.matrix_of_vertexes.matrix[i][2],
                            expect_array_z[i - 1], 1e-6);
  }
  free_data_t_memory(&viewer);
}
END_TEST

Suite *affine_tr_test(void) {
  Suite *s = suite_create("\033[45m-=AFFINE_TR_TEST=-\033[0m");
  TCase *tc = tcase_create("affine_tr_test_tc");

  tcase_add_test(tc, moving_x);
  tcase_add_test(tc, moving_y);
  tcase_add_test(tc, moving_z);

  tcase_add_test(tc, rotation_x);
  tcase_add_test(tc, rotation_y);
  tcase_add_test(tc, rotation_z);

  tcase_add_test(tc, scaling);
  tcase_add_test(tc, affine_tr);

  suite_add_tcase(s, tc);
  return s;
}
