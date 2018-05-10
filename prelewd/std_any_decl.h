#include "cpp.h"

PRELEWD_INPROC(
__attribute__ ((__const__, __pure__))
Any $(copy, Any)(Any const x), {
  return x;
}
)

PRELEWD_INPROC(
__attribute__ ((__nonnull__))
void $(copy_mut, Any)(Any *restrict const ox,
    Any const *restrict const iy), {
  *ox = *iy;
}
)
