#include "cpp.h"
#include "cpp/decl.h"

PRELEWD_INLINE(
__attribute__ ((__const__, __pure__))
Type $(copy, Type)(Type const x), {
  return x;
}
)

PRELEWD_INLINE(
__attribute__ ((__nonnull__))
void $(copy_in, Type)(Type *restrict const ox,
    Type const *restrict const iy), {
  *ox = *iy;
}
)
