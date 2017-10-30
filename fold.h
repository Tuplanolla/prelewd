/// Folds over argument lists.

#ifndef PRELEWD_FOLD_H
#define PRELEWD_FOLD_H

#include "apply.h"

#include "foldr.out.h"
#include "foldl.out.h"
#include "foldr1.out.h"
#include "foldl1.out.h"

/// Fold a binary function over some arguments and an initial value.
///
/// The preprocessor directive `PRELEWD_FOLDR(f, z, x0, x1, x2)` expands
/// to `f(x0, f(x1, f(x2, z)))` in the case of three arguments
/// (with `PRELEWD_APPLY` sprinkled in appropriately).
/// This is useful when a binary function needs to be generalized
/// to an arbitrary arity.
/// Given
///
///     #define F(x, y) (y - x)
///     #define X0 42
///     #define X1 13
///     #define X2 69
///     #define Z 124
///
/// for example, `PRELEWD_FOLDR(F, Z, X0, X1, X2)` expands
/// to `(((124 - 69) - 13) - 42)`.
#define PRELEWD_FOLDR(...) PRELEWD_VARIADIC(PRELEWD_FOLDR, __VA_ARGS__)

/// Fold a binary function over some arguments and an initial value in reverse.
///
/// The preprocessor directive `PRELEWD_FOLDL(f, z, x0, x1, x2)` expands
/// to `f(f(f(z, x0), x1), x2)` in the case of three arguments
/// (with `PRELEWD_APPLY` sprinkled in appropriately).
/// This is useful when a binary function needs to be generalized
/// to an arbitrary arity.
/// Given
///
///     #define F(x, y) (y - x)
///     #define X0 42
///     #define X1 13
///     #define X2 69
///     #define Z 98
///
/// for example, `PRELEWD_FOLDL(F, Z, X0, X1, X2)` expands
/// to `(69 - (13 - (42 - 98)))`.
#define PRELEWD_FOLDL(...) PRELEWD_VARIADIC(PRELEWD_FOLDL, __VA_ARGS__)

/// Fold a binary function over some arguments.
///
/// The preprocessor directive `PRELEWD_FOLDR1(f, x0, x1, x2)` expands
/// to `f(x0, f(x1, x2))` in the case of three arguments
/// (with `PRELEWD_APPLY` sprinkled in appropriately).
/// This is equivalent to `PRELEWD_FOLDR` without the initial value.
#define PRELEWD_FOLDR1(...) PRELEWD_VARIADIC(PRELEWD_FOLDR1, __VA_ARGS__)

/// Fold a binary function over some arguments in reverse.
///
/// The preprocessor directive `PRELEWD_FOLDL1(f, x0, x1, x2)` expands
/// to `f(f(x0, x1), x2)` in the case of three arguments
/// (with `PRELEWD_APPLY` sprinkled in appropriately).
/// This is equivalent to `PRELEWD_FOLDL` without the initial value.
#define PRELEWD_FOLDL1(...) PRELEWD_VARIADIC(PRELEWD_FOLDL1, __VA_ARGS__)

#endif
