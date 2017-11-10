/// Preprocessor assertions.

#ifndef PRELEWD_ASSERT_H
#define PRELEWD_ASSERT_H

#include <assert.h>

#include "type.h"

#ifndef static_assert

#include "gnu.h"

#define PRELEWD_STATIC_ASSERT(x, y) \
  __attribute__ ((__unused__)) \
  static int const prelewd_static_assert_##y[(x) ? 1 : -1]

#ifdef __COUNTER__

/// Check an invariant during compilation.
///
/// The macro invocation `static_assert(x, s)`
/// is equivalent to its standard counterpart.
#define static_assert(x, s) \
  PRELEWD_APPLY(PRELEWD_STATIC_ASSERT, (x), __COUNTER__)

#else

/// Check an invariant during compilation.
///
/// The macro invocation `static_assert(x, s)`
/// is equivalent to its standard counterpart.
/// Each `static_assert` must be on its own line
/// due to the limitations of the language,
/// but this follows from good style anyway.
#define static_assert(x, s) \
  PRELEWD_APPLY(PRELEWD_STATIC_ASSERT, (x), __LINE__)

#endif

#endif

#ifndef dynamic_assert

/// Avoid name conflicts.
///
/// Defining `PRELEWD_CONFLICT` before including this header
/// stops `dynamic_assert` from being defined.
#ifndef PRELEWD_CONFLICT

/// Check an invariant during execution.
///
/// The macro invocation `dynamic_assert(x, s)`
/// is equivalent to `assert(x)` with the message `s`.
/// It exists for the sake of consistency with `static_assert`.
#define dynamic_assert(x, s) assert((s, x))

#endif

#endif

#endif
