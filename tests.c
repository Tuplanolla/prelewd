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
