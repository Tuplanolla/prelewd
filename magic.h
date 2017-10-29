/// Preprocessor directives for template metaprogramming.

#ifndef PRELEWD_MAGIC_H
#define PRELEWD_MAGIC_H

#include "get.h"
#include "seqr.h"
#include "seql.h"
#include "foldr.h"
#include "foldl.h"
#include "splice.h"

/// Apply a function to some arguments.
///
/// The preprocessor directive `PRELEWD_APPLY(f, x0, x1, x2)` expands
/// to `f(x0, x1, x2)` in the case of three arguments.
/// This is useful when the arguments need to be expanded
/// before being passed to the function.
/// Given
///
///     #define F(x) F_##x
///     #define X 42
///
/// for example, `F(X)` expands to `F_X`
/// while `PRELEWD_APPLY(F, X)` expands to `F_42`.
#define PRELEWD_APPLY(f, ...) f(__VA_ARGS__)

#define PRELEWD_SPLAT(x, y) x##_##y
#define PRELEWD_SPLATS(x, y) x##__##y

#define PRELEWD_INDEX(x, i) x##_##i

#define PRELEWD_NARGS(...) \
  PRELEWD_APPLY(PRELEWD_GET_64, __VA_ARGS__, PRELEWD_SEQL_64)

#define PRELEWD_VARIADIC(x, ...) \
  PRELEWD_APPLY(PRELEWD_INDEX, x, PRELEWD_NARGS(__VA_ARGS__))(__VA_ARGS__)

/// The preprocessor directive `$(x, ...)`
/// expands to the template instantiation of the value `x` with the type `...`.
/// Due to the limitations of the language
/// the types have to be single tokens.
/// Luckily this can always be satisfied by using `typedef`.
/// The header `alias.h` should also help.
#define $(...) PRELEWD_VARIADIC(PRELEWD_SPLICE, instance, __VA_ARGS__)

/// Fold a binary function through some arguments.
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

/// Fold a binary function through some arguments in reverse.
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

#endif
