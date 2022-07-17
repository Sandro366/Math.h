#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_

#define SINN 6  // Tailor series order
#define S21_PI 3.141592653589793238462643383279502884L
#define LN2 0.693147180559945309417232121458176568L
#define LN10 2.302585092994045684036338861311L
#define ASIN1 1.570796326794896619256404479703L
#define ATAN1 0.7853981633974483096282022L
#define EPS 0.1e-17
#define s21_signbit(x) __builtin_signbit(x)

// 1. вычисляет абсолютное значение целого числа
int s21_abs(int x);
// 2. вычисляет арккосинус
long double s21_acos(double x);
// 3. вычисляет арксинус
long double s21_asin(double x);
// 4. вычисляет арктангенс
long double s21_atan(double x);
// 5. возвращает ближайшее целое число, не меньшее заданного значения
long double s21_ceil(double x);
// 6. вычисляет косинус
long double s21_cos(double x);
// 7. возвращает значение e, возведенное в заданную степень
long double s21_exp(double x);
// 8. вычисляет абсолютное значение числа с плавающей точкой
long double s21_fabs(double x);
// 9. возвращает ближайшее целое число, не превышающее заданное значение
long double s21_floor(double x);
// 10. остаток операции деления с плавающей точкой
long double s21_fmod(double x, double y);
// 11. вычисляет натуральный логарифм
long double s21_log(double x);
// 12. возводит число в заданную степень
long double s21_pow(double base, double exp);
// 13. вычисляет синус
long double s21_sin(double x);
// 14. вычисляет квадратный корень
long double s21_sqrt(double x);
// 15. вычисляет тангенс
long double s21_tan(double x);

// auxilary functions
long double sin_pi_2(long double x);
int if_whole(long double number);  // целое число (0) / дробное число (1)
int if_divided(long int number, int division);
long double quick_power(long double base, long int power);

#endif  // SRC_S21_MATH_H_
