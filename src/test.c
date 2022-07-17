#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "s21_math.h"

START_TEST(abs_test) {
  ck_assert_int_eq(s21_abs(0), 0);
  ck_assert_int_eq(s21_abs(12), 12);
  ck_assert_int_eq(s21_abs(-46), 46);
  ck_assert_int_eq(s21_abs(30712), 30712);
  ck_assert_int_eq(s21_abs(-30712), 30712);
}
END_TEST

START_TEST(acos_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = 0.9876543,
         x5 = -0.9876543, x6 = 1.0, x7 = -1.0, x8 = 2.0, x9 = -2.0;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", acosl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", acosl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", acosl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", acosl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", acosl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", acosl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", acosl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x8));
  ck_assert_str_eq(str_s21, "nan");
  memset(str_s21, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_acos(x9));
  ck_assert_str_eq(str_s21, "nan");

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(asin_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = 0.9876543,
         x5 = -0.9876543, x6 = 1.0, x7 = -1.0, x8 = 2.0, x9 = -2.0;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", asinl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", asinl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", asinl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", asinl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", asinl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", asinl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", asinl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x8));
  ck_assert_str_eq(str_s21, "nan");
  memset(str_s21, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_asin(x9));
  ck_assert_str_eq(str_s21, "nan");

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(atan_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = 0.9876543,
         x5 = -0.9876543, x6 = 1.0, x7 = -1.0, x8 = 10.12345, x9 = -10.12345,
         x10 = 125.999, x11 = -125.999;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x9));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x10));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x10));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_atan(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", atanl(x11));
  ck_assert_str_eq(str_s21, str_orig);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(ceil_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = 0.9876543,
         x5 = -0.9876543, x6 = 1.0, x7 = -1.0, x8 = 10.12345, x9 = -10.12345,
         x10 = 4294967295.1, x11 = -4294967295.1;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x9));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x10));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x10));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_ceil(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", ceill(x11));
  ck_assert_str_eq(str_s21, str_orig);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(cos_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = S21_PI, x5 = -S21_PI,
         x6 = 2 * S21_PI, x7 = -2 * S21_PI, x8 = 1.0, x9 = -1.0,
         x10 = 999999.999999, x11 = -999999.999999, x12 = 4294967295.0,
         x13 = -4294967295.0;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x9));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x10));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x10));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x11));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x11));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x12));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x12));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_cos(x13));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", cosl(x13));
  ck_assert_str_eq(str_s21, str_orig);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(exp_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = 0.9876543,
         x5 = -0.9876543, x6 = 1.0, x7 = -1.0, x8 = 10.12345, x9 = -10.12345;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(x9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(x9));
  ck_assert_str_eq(str_s21, str_orig);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(-__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(-__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_exp(__builtin_nan("")));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", expl(__builtin_nan("")));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(fabs_test) {
  double x1 = 0.0, x2 = -0.256789, x3 = -0.9876543, x4 = -1.0, x5 = -125.999,
         x6 = -999999.123456, x7 = 1.12345;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fabs(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fabsl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fabs(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fabsl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fabs(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fabsl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fabs(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fabsl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fabs(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fabsl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fabs(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fabsl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fabs(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fabsl(x7));
  ck_assert_str_eq(str_s21, str_orig);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(floor_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = 0.9876543,
         x5 = -0.9876543, x6 = 1.0, x7 = -1.0, x8 = 10.12345, x9 = -10.12345,
         x10 = 4294967295.1, x11 = 4294967295.1;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x9));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x10));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x10));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_floor(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", floorl(x11));
  ck_assert_str_eq(str_s21, str_orig);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(fmod_test) {
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  // snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fmod(0, 0));
  // snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(0, 0));
  // ck_assert_str_eq(str_s21, str_orig);
  // memset(str_s21, '\0', 100);
  // memset(str_orig, '\0', 100);
  ck_assert_ldouble_nan(s21_fmod(0, 0));

  // snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
  //          s21_fmod(1.0, __builtin_nan("")));
  // snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(1.0,
  // __builtin_nan(""))); ck_assert_str_eq(str_s21, str_orig); memset(str_s21,
  // '\0', 100); memset(str_orig, '\0', 100);
  ck_assert_ldouble_nan(s21_fmod(1.0, __builtin_nan("")));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_fmod(__builtin_nan(""), 2.0));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(__builtin_nan(""), 2.0));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  // snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fmod(1.0, 0));
  // snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(1.0, 0));
  // ck_assert_str_eq(str_s21, str_orig);
  // memset(str_s21, '\0', 100);
  // memset(str_orig, '\0', 100);
  ck_assert_ldouble_nan(s21_fmod(1.0, 0));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_fmod(12345.9, __builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf",
           fmodl(12345.9, __builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fmod(999999999.0, 12345.0));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(999999999.0, 12345.0));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_fmod(999999.999999, 123.456));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(999999.999999, 123.456));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fmod(999999999, 123.456));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(999999999, 123.456));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fmod(__builtin_inf(), 2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(__builtin_inf(), 2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_fmod(999999.999999, 123456.0));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf",
           fmodl(999999.999999, 123456.0));
  ck_assert_str_eq(str_s21, str_orig);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fmod(-999999999, 123.456));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(-999999999, 123.456));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_fmod(-9.99999999, -1.23456));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(-9.99999999, -1.23456));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_fmod(999999, -1.23456));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", fmodl(999999, -1.23456));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(log_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = S21_PI, x4 = 2 * S21_PI, x5 = 1.0,
         x6 = 999999.999999, x7 = 429496729.0, x8 = 2.0, x9 = -1.0, x10 = 1e-10;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(__builtin_nan("")));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(__builtin_nan("")));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(-__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(-__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  // snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x1));
  // snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x1));
  // ck_assert_str_eq(str_s21, str_orig);
  // memset(str_s21, '\0', 100);
  // memset(str_orig, '\0', 100);
  ck_assert_ldouble_infinite(s21_log(x1));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  // snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x9));
  // snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x9));
  // ck_assert_str_eq(str_s21, str_orig);
  // memset(str_s21, '\0', 100);
  // memset(str_orig, '\0', 100);
  ck_assert_ldouble_nan(s21_log(x9));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_log(x10));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", logl(x10));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(pow_test) {
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(0, 0));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(0, 0));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(9.12345, 5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(9.12345, 5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(9.12345, -5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(9.12345, -5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(9.12345, 2.987));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(9.12345, 2.987));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(-9.12345, 2.987));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-9.12345, 2.987));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(-9.12345, -2.987));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-9.12345, -2.987));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(12, 5.12345));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(12, 5.12345));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(12, -5.12345));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(12, -5.12345));
  ck_assert_str_eq(str_s21, str_orig);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(-9.12345, -2.987));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-9.12345, -2.987));
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(1.0, 5.123));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(1.0, 5.123));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(9.157, 0.0));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(9.157, 0.0));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(0, 1.999999));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(0, 1.999999));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(0, 999.0));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(0, 999.0));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(-1.0, __builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-1.0, __builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(-1.0, -__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-1.0, -__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(-0.999, __builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-0.999, __builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(-0.999, -__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf",
           powl(-0.999, -__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(-1.9, __builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-1.9, __builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(-1.999, -__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf",
           powl(-1.999, -__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(-__builtin_inf(), -111));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-__builtin_inf(), -111));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(-__builtin_inf(), -222));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-__builtin_inf(), -222));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(-__builtin_inf(), 111));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-__builtin_inf(), 111));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_pow(-__builtin_inf(), 222));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", powl(-__builtin_inf(), 222));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(__builtin_inf(), -0.12345));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf",
           powl(__builtin_inf(), -0.12345));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(__builtin_inf(), 123.12345));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf",
           powl(__builtin_inf(), 123.12345));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf",
           s21_pow(__builtin_inf(), 123.12345));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf",
           powl(__builtin_inf(), 123.12345));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Le", s21_pow(55, 35));
  snprintf(str_orig, sizeof(char) * 99, "%.6Le", powl(55, 35));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Le", s21_pow(-87, 9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Le", powl(-87, 9));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Le", s21_pow(55, -15));
  snprintf(str_orig, sizeof(char) * 99, "%.6Le", powl(55, -15));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Le", s21_pow(-87, -9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Le", powl(-87, -9));
  ck_assert_str_eq(str_s21, str_orig);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(sin_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = S21_PI, x5 = -S21_PI,
         x6 = 1.0, x7 = -1.0, x8 = 999999.999999, x9 = -999999.999999,
         x10 = 4294967295.0, x11 = -4294967295.0;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x9));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x10));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x10));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sin(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sinl(x11));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(sqrt_test) {
  double x0 = 0.0000001, x1 = 0.0, x2 = 1.0, x3 = -1.0, x4 = 99999999999.0,
         x5 = 999999.999999;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(x0));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(x0));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  // snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(x3));
  // snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(x3));
  // ck_assert_str_eq(str_s21, str_orig);
  // memset(str_s21, '\0', 100);
  // memset(str_orig, '\0', 100);
  ck_assert_ldouble_nan(s21_sqrt(x3));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(-__builtin_inf()));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(-__builtin_inf()));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_sqrt(__builtin_nan("")));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", sqrtl(__builtin_nan("")));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  free(str_s21);
  free(str_orig);
}
END_TEST

START_TEST(tan_test) {
  double x1 = 0.0, x2 = 0.256789, x3 = -0.256789, x4 = S21_PI, x5 = -S21_PI,
         x6 = 1.0, x7 = -1.0, x8 = 999999.999999, x9 = -999999.999999,
         x10 = 4294967295.0, x11 = -4294967295.0;
  char *str_s21 = calloc(100, sizeof(char));
  char *str_orig = calloc(100, sizeof(char));

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x1));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x1));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x2));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x2));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x3));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x3));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x4));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x4));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x5));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x5));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x6));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x6));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x7));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x7));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x8));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x8));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x9));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x9));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x10));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x10));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x11));
  ck_assert_str_eq(str_s21, str_orig);
  memset(str_s21, '\0', 100);
  memset(str_orig, '\0', 100);

  snprintf(str_s21, sizeof(char) * 99, "%.6Lf", s21_tan(x11));
  snprintf(str_orig, sizeof(char) * 99, "%.6Lf", tanl(x11));
  ck_assert_str_eq(str_s21, str_orig);

  free(str_s21);
  free(str_orig);
}
END_TEST

int main(void) {
  Suite *s = suite_create("s21_math.h test");
  TCase *MathH_test = tcase_create("Core");
  SRunner *sr = srunner_create(s);
  int nf;

  suite_add_tcase(s, MathH_test);
  tcase_add_test(MathH_test, abs_test);    // 1
  tcase_add_test(MathH_test, acos_test);   // 2
  tcase_add_test(MathH_test, asin_test);   // 3
  tcase_add_test(MathH_test, atan_test);   // 4
  tcase_add_test(MathH_test, ceil_test);   // 5
  tcase_add_test(MathH_test, cos_test);    // 6
  tcase_add_test(MathH_test, exp_test);    // 7
  tcase_add_test(MathH_test, fabs_test);   // 8
  tcase_add_test(MathH_test, floor_test);  // 9
  tcase_add_test(MathH_test, fmod_test);   // 10
  tcase_add_test(MathH_test, log_test);    // 11
  tcase_add_test(MathH_test, pow_test);    // 12
  tcase_add_test(MathH_test, sin_test);    // 13
  tcase_add_test(MathH_test, sqrt_test);   // 14
  tcase_add_test(MathH_test, tan_test);    // 15

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
