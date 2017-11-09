/// Preprocessor type instantiation.

#ifndef PRELEWD_TYPE_H
#define PRELEWD_TYPE_H

#include "fold.h"

/// Instantiate a type.
///
/// The macro invocation `PRELEWD_TYPE(x, ...)` expands
/// to the type instantiation of the value `x` at the types `...`.
/// Each type has to be single token due to the limitations of the language,
/// but this can always be done by using `typedef`.
#define PRELEWD_TYPE(...) PRELEWD_FOLDR(PRELEWD_INDEX, S, __VA_ARGS__)

/// Avoid namespace conflicts.
///
/// Defining `PRELEWD_CONFLICT` before including this header
/// stops `$` from being defined.
#ifndef PRELEWD_CONFLICT

/// Alias `PRELEWD_TYPE`.
#define $(...) PRELEWD_TYPE(__VA_ARGS__)

#endif

#endif
