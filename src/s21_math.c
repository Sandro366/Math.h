#include "s21_math.h"

int s21_abs(int x) { return (x < 0) ? -x : x; }

long double s21_acos(double x) {
  long double result = 0.0;
  if (x == -1) {
    result = S21_PI;
  } else {
    result = S21_PI / 2 - s21_asin(x);
  }
  return result;
}

long double s21_asin(double x) {
  int sign = 1;
  if (x < 0) {
    sign = -1;
    x *= sign;
  }
  long double result = 0.0;
  if ((x > 1.0)) {
    result = __builtin_nan("");
  } else if (x == 1.0) {
    result = ASIN1;
    if (sign == -1) result *= sign;
  } else {
    long int n = 1;
    long double a = x;
    long double sum = 1;
    result = x;
    while (sum > EPS) {
      a = x * x * (a * (2 * n - 1)) / (2 * n);
      sum = a / (2 * n + 1);
      result += sum;
      n++;
    }
    if (sign == -1) result *= sign;
  }
  return result;
}

long double s21_ceil(double x) {
  // для целых чисел результат вернет само число, иначе
  // для положительных - прибавляем 1 и берем целую часть (long int) и переводим
  // ее назад в long double для отрицательных - берем целую часть (long int),
  // переводим ее назад в long double
  long double res = x;
  if (if_whole(x) == 1 && x > 0) res = (long double)((long int)(x + 1));
  if (if_whole(x) == 1 && x < 0) res = (long double)((long int)x);
  if (x < 0 && x > -1) res *= -1;
  return res;
}

long double s21_atan(double x) {
  int sign = 1;
  if (x < 0) {
    sign = -1;
    x *= sign;
  }
  long double result = 0.0;
  if (x == 1) {
    result = ATAN1;
  } else {
    result = s21_asin(x / s21_sqrt(1 + x * x));
  }
  if (sign == -1) result *= sign;
  return result;
}

long double s21_cos(double x) { return s21_sin(x + S21_PI / 2); }

long double s21_exp(double x) {
  long double result = 0.0;
  if (x != x) {
    result = __builtin_nan("");
  } else if (x == __builtin_inf()) {
    result = __builtin_inf();
  } else if (x == -(__builtin_inf())) {
    result = 0.0;

  } else {
    //  ехр(х) для х от 0 до 0.7. прям хорошо считать, с нужной точностью
    //  exp(x), where x = k * ln(2) + x'. where k - integer, x' = double. so
    //  exp(k * ln(2) + r) = = exp(k* ln(2)) * exp(x') = 2^k * exp(x')!!! x = k
    //   ln(2) + x'; ln(2) = 0.693147180559945 (const)
    int k = s21_floor((long double)x / LN2);
    long double xx = (long double)x - k * LN2;
    long double sum = 1.0;  // промежуточная сумма операции в ряде
    int n = 1;  // счетчик рядов
    while (n < 16) {
      result += sum;
      sum = sum * xx / n;
      n++;
    }
    if (k < 0) {
      for (int ii = 0; ii > k; ii--) {
        result /= 2;
      }
    } else {
      for (int ii = 0; ii < k; ii++) {
        result *= 2;
      }
    }
  }
  return result;
}

long double s21_fabs(double x) {
  long double lx = (long double)x;
  return (lx < 0) ? -lx : lx;
}

long double s21_floor(double x) {
  // для целых чисел результат вернет само число, иначе
  // для положительных - берем целую часть (long int) и переводим ее назад в
  // long double для отрицательных - вычитаем 1 и берем целую часть (long int),
  // переводим ее назад в long double
  long double res = x;
  if (if_whole(x) == 1 && x > 0) res = (long double)((long int)x);
  if (if_whole(x) == 1 && x < 0) res = (long double)((long int)(x - 1));
  return res;
}

long double s21_fmod(double x, double y) {
  long double result;
  if (y == 0) {
    result = -__builtin_nan("");
  } else if (__builtin_isnan(x) || __builtin_isnan(y)) {
    result = __builtin_nan("");
  } else if (x == __builtin_inf()) {
    result = __builtin_nan("");
  } else if (y == __builtin_inf()) {
    result = x;
  } else {
    y = s21_fabs(y);
    if (x > 0) {
      result = x - s21_floor(x / y) * y;
    } else {
      result = x - s21_ceil(x / y) * y;
    }
  }
  return result;
}

long double s21_log(double x) {
  long double result = 0.0;
  if (x != x) {
    result = __builtin_nan("");
  } else if (x < 0 || x == -(__builtin_inf())) {
    result = __builtin_nan("");
  } else if (x == __builtin_inf()) {
    result = __builtin_inf();
  } else if (x == 0) {
    result = -(__builtin_huge_vall());
  } else {
    int sign = 1;
    int i = 1;
    long double tmp;
    int n = 0, k = 0;
    if (x >= 1) {
      while (x >= 10) {
        x /= 10;
        n++;
      }
    } else {
      while (x <= 1) {
        x *= 10;
        n--;
      }
    }
    while (x >= 2) {
      x /= 2;
      k++;
    }
    long double power = --x;
    do {
      tmp = sign * (power / i);
      result += tmp;
      power *= x;
      i++;
      sign = -sign;
    } while (s21_fabs(tmp) > EPS);
    result = n * LN10 + k * LN2 + result;
  }
  return result;
}

long double s21_pow(double base, double expon) {
  long double result = 0.0;
  if (base == 1.0) {
    result = 1.0;
  } else if (expon == 0.0) {
    result = 1.0;
  } else if (base == 0.0 &&
             (if_whole(expon) == 0 && expon > 0 && (int)expon % 2 != 0)) {
    if (s21_signbit(base) == 0)
      result = 0.0;
    else if (s21_signbit(base) == 1)
      result = -0.0;
  } else if (base == 0.0 && (if_whole(expon) == 1 && expon > 0)) {
    result = 0.0;
  } else if (base == -1.0 &&
             (expon == __builtin_inf() || expon == -(__builtin_inf()))) {
    result = 1.0;
  } else if (s21_fabs(base) < 1.0 && expon == -(__builtin_inf())) {
    result = __builtin_inf();
  } else if (s21_fabs(base) > 1.0 && expon == -(__builtin_inf())) {
    result = 0;
  } else if (s21_fabs(base) < 1.0 && expon == __builtin_inf()) {
    result = 0;
  } else if (s21_fabs(base) > 1.0 && expon == __builtin_inf()) {
    result = __builtin_inf();
  } else if ((base < 0 && base != -1) && if_whole(expon) == 1) {
    result = -__builtin_nan("");
  } else if (base == -(__builtin_inf()) &&
             (if_whole(expon) == 0 && expon < 0 && ((int)expon % 2 != 0))) {
    result = -0.0;
  } else if (base == -(__builtin_inf()) &&
             (if_whole(expon) == 0 && expon < 0 && ((int)expon % 2 == 0))) {
    result = 0.0;
  } else if (base == -(__builtin_inf()) &&
             (if_whole(expon) == 0 && expon > 0 && ((int)expon % 2 != 0))) {
    result = -(__builtin_inf());
  } else if (base == -(__builtin_inf()) &&
             (if_whole(expon) == 0 && expon > 0 && ((int)expon % 2 == 0))) {
    result = __builtin_inf();
  } else if (base == __builtin_inf() && expon < 0) {
    result = 0.0;
  } else if (base == __builtin_inf() && expon > 0) {
    result = __builtin_inf();
  } else if (base != base || expon != expon) {
    result = __builtin_nan("");
  } else if (base == 0.0 &&
             (if_whole(expon) == 0 && expon < 0 && ((int)expon % 2 != 0))) {
    if (s21_signbit(base) == 0)
      result = __builtin_huge_vall();
    else if (s21_signbit(base) == 1)
      result = -__builtin_huge_vall();
  } else if (base == 0.0 &&
             (if_whole(expon) == 0 && expon < 0 && ((int)expon % 2 == 0))) {
    result = __builtin_huge_vall();
  } else {
    if (if_whole(base) == 0 && if_whole(expon) == 0) {
      result = quick_power(base, expon);
    } else {
      result = s21_exp(expon * s21_log(base));
    }
  }
  return result;
}

long double s21_sin(double x) {
  long double res = 0.0;
  int sign = -1;
  if (x >= 0) sign = 1;
  x = s21_fmod(s21_fabs(x), 2 * S21_PI);
  if (x <= S21_PI / 2)
    res = sin_pi_2(x);
  else if (x <= S21_PI)
    res = sin_pi_2(S21_PI - x);
  else if (x <= 2 * S21_PI)
    res = -s21_sin(2 * S21_PI - x);
  return sign * res;
}

long double s21_sqrt(double x) {
  long double result = 0.0;
  if (x != x) {
    result = __builtin_nan("");
  } else if (x == __builtin_inf()) {
    result = __builtin_inf();
  } else if (x < 0 || x == -__builtin_inf()) {
    result = -__builtin_nan("");
  } else if (x == 0) {
    if (s21_signbit(x) == 0)
      result = 0.0;
    else if (s21_signbit(x) == 1)
      result = -0.0;
  } else if (x == 1.0) {
    result = 1.0;
    // } else {
    //   long double min_temp_res, max_temp_res;
    //   long double exact = 1e-7;
    //   long double my_x = (long double)x;
    //   if (x < 1.0) {
    //     min_temp_res = 0.0;
    //     max_temp_res = 1.0;
    //   } else {
    //     min_temp_res = 1.0;
    //     max_temp_res = my_x;
    //   }
    //   while (1) {
    //     long double test_res;
    //     result = (min_temp_res + max_temp_res) / 2.0;
    //     test_res = result * result;
    //     if (test_res < my_x && (my_x - test_res) > exact) {
    //       min_temp_res = result;
    //     } else if (test_res > my_x && (test_res - my_x) > exact) {
    //       max_temp_res = result;
    //     } else {
    //       break;
    //     }
    //   }
    // }
  } else {
    result = s21_exp(s21_log(x) / 2);
  }
  return result;
}

long double s21_tan(double x) { return s21_sin(x) / s21_cos(x); }

// ******auxilary functions******

int if_whole(long double number) {
  int result = 1;
  long long int whole = (long long int)number;
  if (number == (long double)whole) {
    result = 0;
  }
  return result;
}

long double sin_pi_2(long double x) {
  long double res = x;
  long long int factor = 6;
  long double poww = x * x * x;
  for (int n = 2; n <= 10; n++) {
    res -= poww / factor;
    poww *= x * x;
    factor *= 2 * n * (2 * n + 1);
    n++;
    res += poww / factor;
    poww *= x * x;
    factor *= 2 * n * (2 * n + 1);
  }
  return res;
}

int if_divided(long int number, int division) {
  int result = 1;
  long int test = number / (long int)division;
  if (number == (test * (long int)division)) {
    result = 0;
  }
  return result;
}

long double quick_power(long double base, long int power) {
  int sign = 1;
  if (power < 1) {
    sign = -1;
    power *= sign;
  }
  long double result = base;
  int flag = 1;
  if (power > 19) {
    for (int i = 19; i > 1; i--) {
      if (if_divided(power, i) == 0) {
        flag = 0;
        for (int j = 1; j < i; j++) {
          result = result * base;
        }
        long int new_power = power / (long int)i;
        result = quick_power(result, new_power);
        break;
      }
    }
  }
  if ((power > 19 && flag == 1) || power < 20) {
    for (int i = 1; i < power; i++) {
      result = result * base;
    }
  }
  if (sign == -1) result = 1 / result;
  return result;
}
