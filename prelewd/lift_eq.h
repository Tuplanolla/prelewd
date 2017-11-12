#include <stdbool.h>

#include "cpp.h"
#include "cpp/decl.h"

PRELEWD_INLINE(
__attribute__ ((__const__, __pure__))
bool $(eq, Eq)(Eq const x, Eq const y), {
  return x == y;
}
)

PRELEWD_INLINE(
__attribute__ ((__const__, __pure__))
bool $(neq, Eq)(Eq const x, Eq const y), {
  return x != y;
}
)
