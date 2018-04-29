#include "cpp.h"

PRELEWD_INPROC(
__attribute__ ((__const__, __pure__))
Type $(copy, Type)(Type const x), {
  return x;
}
)

PRELEWD_INPROC(
__attribute__ ((__nonnull__))
void $(copy_mut, Type)(Type *restrict const ox,
    Type const *restrict const iy), {
  *ox = *iy;
}
)
