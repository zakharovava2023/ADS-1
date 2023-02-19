// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>
#include <cmath>



bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i <= sqrt(value); i++)
        if (value % i == 0)
            return false;
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t a = 2;
    while (n != 0) {
        if (checkPrime(a))
            n--;
        a++;
    }
    return a-1;
}

uint64_t nextPrime(uint64_t value) {
    for (uint64_t i = value+1; ; i++)
        if (checkPrime(i)) {
            return i;
            break;
        }
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t i = 2; i < hbound; i++)
        if (checkPrime(i))
            sum += i;
    return sum;
}
