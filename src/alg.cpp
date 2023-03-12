// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double ans = 1.0;
  for (int i = 0; i < n; i++) {
    ans *= value;
  }
  return ans;
}

uint64_t fact(uint16_t n) {
  int ans = 1;
  for (int i = 2; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) 
  double e = 0.0;
  for (i = 0; i <= count; i++) {
    e += calcItem(x, i);
  }
return e;
}

double sinn(double x, uint16_t count) {
  double sign = 1.0;
  double ans = 0;
  for (i = 0; i < count; i++) {
    ans += sign * calcItem(x, 2 * i + 1);
    sign *= -1.0;
  }
  return ans;
}

double cosn(double x, uint16_t count) {
  double sign = 1.0;
  double ans = 0;
  for (i = 0; i < count; i++) {
    ans += sign * calcItem(x, 2 * i);
    sign *= -1.0;
  }
  return ans;
}
