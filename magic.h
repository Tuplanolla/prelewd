/// Preprocessor directives for template metaprogramming.

#ifndef PRELEWD_MAGIC_H
#define PRELEWD_MAGIC_H

#include "apply.h"
#include "fold.h"
#include "get.h"
#include "seq.h"
#include "splice.h"

#define PRELEWD_PASTE(x, y) x##y

#define PRELEWD_SPLAT(x, y) x##_##y
#define PRELEWD_SPLATS(x, y) x##__##y

#define PRELEWD_INDEX(x, i) x##_##i

#define PRELEWD_NARGS(...) \
  PRELEWD_APPLY(PRELEWD_GET_64, __VA_ARGS__, PRELEWD_SEQL_64)

#define PRELEWD_VARIADIC(x, ...) \
  PRELEWD_APPLY(PRELEWD_INDEX, x, PRELEWD_NARGS(__VA_ARGS__))(__VA_ARGS__)

/// The preprocessor directive `PRELEWD_S(x, ...)`
/// expands to the template instantiation of the value `x` with the type `...`.
/// Due to the limitations of the language
/// the types have to be single tokens.
/// Luckily this can always be satisfied by using `typedef`.
/// The header `alias.h` should also help.
#define PRELEWD_S(...) PRELEWD_VARIADIC(PRELEWD_SPLICE, s, __VA_ARGS__)

#ifndef PRELEWD_CONFLICT

/// The preprocessor directive `$(x, t0, t1, t2)` expands
/// to `PRELEWD_S(x, t0, t1, t2)` in the case of three arguments.
#define $(...) PRELEWD_S(__VA_ARGS__)

// TODO This is probably a bad idea.
/// The preprocessor directive `$$(x, t0, t1, t2)` expands
/// to `PRELEWD_S(x, t0, t1, t2)()` in the case of three arguments.
#define $$(...) PRELEWD_S(__VA_ARGS__)()

#endif

#endif
