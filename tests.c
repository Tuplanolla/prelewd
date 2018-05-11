#include <cheat.h>
#include <stdio.h>
#include <stdlib.h>

#include "prelewd.h"

#define T int

CHEAT_DECLARE(

static T $(min, T)(T const x, T const y) {
  return x < y ? x : y;
}

static T $(42, T)(void) {
  return 42;
}

static T $(13, T)(void) {
  return 13;
}

)

#undef T

CHEAT_TEST(example,

cheat_assert($(min, int)($(42, int)(), $(13, int)()) == 13);

)

CHEAT_TEST(poly,

cheat_assert($(id, int)($(42, int)()) == 42);

)

CHEAT_TEST(arith,

/*
cheat_assert($(add, int)($(42, int)(), $(13, int)()) == 55);

int x[2] = {42, 13};
int y[2] = {69, 7};
int z[2] = {111, 20};
int t[2];
$(add, int, 2)(t, x, y);
cheat_assert($(eq, int, 2)(t, z));
*/

)
