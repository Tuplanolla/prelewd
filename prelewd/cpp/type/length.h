/// Preprocessor argument list inspection.

#ifndef PRELEWD_LENGTH_H
#define PRELEWD_LENGTH_H

#include "apply.h"

#include "get.out.h"
#include "seql.out.h"

/// Find the number of arguments passed on to a macro.
///
/// The macro invocation `PRELEWD_LENGTH(x0, x1, x2, x3)` expands
/// to `4` in this case of four arguments.
#define PRELEWD_LENGTH(...) \
  PRELEWD_APPLY(PRELEWD_GET_64, __VA_ARGS__, PRELEWD_SEQL_64)

#endif
