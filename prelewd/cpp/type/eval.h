/// Preprocessor macro family indexing and invocation.

#ifndef PRELEWD_EVAL_H
#define PRELEWD_EVAL_H

#include "apply.h"
#include "index.h"
#include "length.h"

/// Invoke a macro from an indexed family of macros.
///
/// The macro invocation `PRELEWD_EVAL(f, x0, x1, x2, x3)` expands
/// to `f_4(x0, x1, x2, x3)` in this case of four arguments
/// (with `PRELEWD_APPLY` sprinkled in appropriately).
/// This is useful when the definition of the macro
/// depends on the number of arguments: given
///
///     #define F_1(x0) (x0)
///     #define F_2(x0, x1) (x1 - x0)
///     #define X0 42
///     #define X1 13
///
/// for example, `PRELEWD_EVAL(F, X0)` expands to `(42)`
/// while `PRELEWD_EVAL(F, X0, X1)` expands to `(13 - 42)`.
/// This can be taken even further: given
///
///     #define F(...) PRELEWD_EVAL(F, __VA_ARGS__)
///
/// in addition to the previous example, `F(X0)` expands to `(42)`
/// while `F(X0, X1)` expands to `(13 - 42)`.
#define PRELEWD_EVAL(f, ...) \
  PRELEWD_APPLY(PRELEWD_INDEX, f, PRELEWD_LENGTH(__VA_ARGS__))(__VA_ARGS__)

#endif
