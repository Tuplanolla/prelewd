#include <stdbool.h>

#include "cpp.h"

/// Less than or equal.
///
/// This preserves all the quirks that come with floating-point numbers.
PRELEWD_INPROC(__attribute__ ((__const__, __pure__))
bool $(le, Ord)(Ord const x, Ord const y), {
  return x <= y;
})

/// Less than.
///
/// This preserves all the quirks that come with floating-point numbers.
PRELEWD_INPROC(__attribute__ ((__const__, __pure__))
bool $(lt, Ord)(Ord const x, Ord const y), {
  return x < y;
})

/// Greater than or equal.
///
/// This preserves all the quirks that come with floating-point numbers.
PRELEWD_INPROC(__attribute__ ((__const__, __pure__))
bool $(ge, Ord)(Ord const x, Ord const y), {
  return x >= y;
})

/// Greater than.
///
/// This preserves all the quirks that come with floating-point numbers.
PRELEWD_INPROC(__attribute__ ((__const__, __pure__))
bool $(gt, Ord)(Ord const x, Ord const y), {
  return x > y;
})
