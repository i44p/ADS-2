// Copyright 2022 NNTU-CS
#include "alg.h"

#include <cstdint>

double pown(double value, uint16_t n) {
  double ret = value;
  for (int i = 1; i < n; i++) ret *= ret;
  return ret;
}

uint64_t fact(uint16_t n) { return 0.0; }

double calcItem(double x, uint16_t n) { return 0.0; }

double expn(double x, uint16_t count) { return 0.0; }

double sinn(double x, uint16_t count) { return 0.0; }

double cosn(double x, uint16_t count) { return 0.0; }
