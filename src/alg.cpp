// Copyright 2022 NNTU-CS
#include "alg.h"

#include <cstdint>

double pown(double value, uint16_t n) {
  double ret = value;
  for (; n > 1; n--) ret *= value;
  return ret;
}

uint64_t fact(uint16_t n) { return n > 1 ? n * fact(n - 1) : 1; }

double calcItem(double x, uint16_t n) { return pown(x, n) / fact(n); }

double expn(double x, uint16_t count) {
  return count > 0 ? calcItem(x, count) + expn(x, count - 1) : 1;
}

double sinn(double x, uint16_t count) {
  return count > 1 ? sinn(x, count - 1) +
                         (2 * (count & 1) - 1) * calcItem(x, 2 * count - 1)
                   : x;
}

double cosn(double x, uint16_t count) {
  return count > 1 ? cosn(x, count - 1) +
                         (2 * (count & 1) - 1) * calcItem(x, 2 * (count - 1))
                   : 1;
}
