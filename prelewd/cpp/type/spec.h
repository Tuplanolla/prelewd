/// Preprocessor type instantiation.

#ifndef PRELEWD_SPEC_H
#define PRELEWD_SPEC_H

#include "fold.h"

/// Instantiate a type.
///
/// The macro invocation `PRELEWD_SPEC(x, ...)` expands
/// to the type specification of the value `x` at the types `...`.
/// Each type has to be single token due to the limitations of the language,
/// but this can always be done by using `typedef`.
#define PRELEWD_SPEC(...) PRELEWD_FOLDR(PRELEWD_INDEX, S, __VA_ARGS__)

/// Avoid name conflicts.
///
/// Defining `PRELEWD_CONFLICT` before including this header
/// stops `$` from being defined.
#ifndef PRELEWD_CONFLICT

/// Alias `PRELEWD_SPEC`.
#define $(...) PRELEWD_SPEC(__VA_ARGS__)

#endif

#endif
