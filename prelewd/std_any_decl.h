#include "cpp.h"

/// Identity function.
PRELEWD_INPROC(__attribute__ ((__const__, __pure__))
Any $(id, Any)(Any const x), {
  return x;
})
