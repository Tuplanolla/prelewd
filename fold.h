/// Preprocessor argument list folding.

#ifndef PRELEWD_FOLD_H
#define PRELEWD_FOLD_H

#include "eval.h"

#include "foldr.out.h"

/// Fold a binary macro through an argument list.
///
/// The macro invocation `PRELEWD_FOLDR(f, x0, x1, x2)` expands
/// to `f(x0, f(x1, x2))` in this case of three arguments
/// (with `PRELEWD_APPLY` sprinkled in appropriately).
/// This is useful when a binary function needs to be generalized
/// to an arbitrary length.
/// Given
///
///     #define F(x, y) (y - x)
///     #define X0 42
///     #define X1 13
///     #define X2 69
///
/// for example, `PRELEWD_FOLDR(F, X0, X1, X2)` expands
/// to `((42 - 69) - 13)`, which is equal to `-40`.
#define PRELEWD_FOLDR(...) PRELEWD_EVAL(PRELEWD_FOLDR, __VA_ARGS__)

#include "foldl.out.h"

/// Fold a binary macro through an argument list in reverse.
///
/// The macro invocation `PRELEWD_FOLDL(f, x0, x1, x2)` expands
/// to `f(f(x0, x1), x2)` in this case of three arguments
/// (with `PRELEWD_APPLY` sprinkled in appropriately).
/// This is useful when a binary function needs to be generalized
/// to an arbitrary length.
/// Given
///
///     #define F(x, y) (y - x)
///     #define X0 42
///     #define X1 13
///     #define X2 69
///
/// for example, `PRELEWD_FOLDL(F, X0, X1, X2)` expands
/// to `(69 - (13 - 42))`, which is equal to `98`.
#define PRELEWD_FOLDL(...) PRELEWD_EVAL(PRELEWD_FOLDL, __VA_ARGS__)

#endif
