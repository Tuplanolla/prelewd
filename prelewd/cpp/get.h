/// Preprocessor argument list indexing.

#ifndef PRELEWD_GET_H
#define PRELEWD_GET_H

#include "eval.h"

#include "get.out.h"

/// Fetch an argument from the argument list of a macro.
///
/// The macro invocation `PRELEWD_GET(2, x0, x1, x2, x3)` expands
/// to `x2` in this case of four arguments.
#define PRELEWD_GET(...) PRELEWD_EVAL(PRELEWD_GET, __VA_ARGS__)

#endif
