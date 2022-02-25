// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  bool res = true;
  for (uint64_t i=2; i<=(value/2); ++i){
    if (value%i == 0)
      res = false;
  }
  return res;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
}
