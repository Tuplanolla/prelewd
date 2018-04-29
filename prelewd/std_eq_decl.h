#include <stdbool.h>

#include "cpp.h"

PRELEWD_INPROC(
__attribute__ ((__const__, __pure__))
bool $(eq, Eq)(Eq const x, Eq const y), {
  return x == y;
}
)

PRELEWD_INPROC(
__attribute__ ((__const__, __pure__))
bool $(neq, Eq)(Eq const x, Eq const y), {
  return x != y;
}
)
