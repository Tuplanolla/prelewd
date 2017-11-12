#include <stdbool.h>

#include "cpp.h"
#include "cpp/decl.h"

PRELEWD_INLINE(
__attribute__ ((__const__, __pure__))
bool $(le, Ord)(Ord const x, Ord const y), {
  return x <= y;
}
)

PRELEWD_INLINE(
__attribute__ ((__const__, __pure__))
bool $(lt, Ord)(Ord const x, Ord const y), {
  return x < y;
}
)

PRELEWD_INLINE(
__attribute__ ((__const__, __pure__))
bool $(ge, Ord)(Ord const x, Ord const y), {
  return x >= y;
}
)

PRELEWD_INLINE(
__attribute__ ((__const__, __pure__))
bool $(gt, Ord)(Ord const x, Ord const y), {
  return x > y;
}
)
