#include <stdbool.h>

#include "cpp.h"

/// Equality.
///
/// This preserves all the quirks that come with floating-point numbers.
PRELEWD_INPROC(__attribute__ ((__const__, __pure__))
bool $(eq, Eq)(Eq const x, Eq const y), {
  return x == y;
})

/// Inequality.
///
/// This preserves all the quirks that come with floating-point numbers.
PRELEWD_INPROC(__attribute__ ((__const__, __pure__))
bool $(neq, Eq)(Eq const x, Eq const y), {
  return x != y;
})
