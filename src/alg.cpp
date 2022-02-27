// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  bool res = true;
  for (uint64_t i = 2; i <= (value / 2); ++i) {
    if (value % i == 0)
      res = false;
  }
  return res;
}

uint64_t nPrime(uint64_t n) {
  int a = -1;
  uint64_t i = 0;
  do {
    i++;
    if (checkPrime(i)) {
      a++;
    }
  } while (a < n);
  return i;
}

uint64_t nextPrime(uint64_t value) {
  while (1) {
    int n = 1;
    value++;
    for (int i = 2; i <= value; i++)
      if (value % i == 0)
        n++;
      if (n == 2)
        return value;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  int *a = new int[hbound+1];
  for (int i=0; i <= hbound; ++i)
    a[i] = i;
  for (int i=2; i*i <= hbound; i++) {
    if (a[i]) {
      for (int j=i*i; j <= hbound; j+=i)
        a[j] = 0;
    }
  }
  for (int i=2; i < hbound; ++i) {
    if (a[i]) {
      sum = sum + a[i];
    }
  }
  return sum;
}
