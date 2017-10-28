/// Preprocessor directives for template metaprogramming.

#ifndef PRELEWD_MAGIC_H
#define PRELEWD_MAGIC_H

#include "get.h"
#include "seq.h"
#include "splice.h"

#define PRELEWD_APPLY(f, ...) f(__VA_ARGS__)

#define PRELEWD_INDEX(x, i) x##_##i

#define PRELEWD_NARGS(...) \
  PRELEWD_APPLY(PRELEWD_GET_63, __VA_ARGS__, PRELEWD_SEQ_64)

#define PRELEWD_TEMPLATE(x, ...) \
  PRELEWD_APPLY(PRELEWD_INDEX, x, PRELEWD_NARGS(__VA_ARGS__))(__VA_ARGS__)

/// The preprocessor directive `$(x, ...)`
/// expands to the template instantiation of the value `x` with the type `...`.
/// Due to the limitations of the language
/// the types have to be single tokens.
/// Luckily this can always be satisfied by using `typedef`.
/// The header `alias.h` should also help.
#define $(...) PRELEWD_TEMPLATE(PRELEWD_SPLICE, prelewd, __VA_ARGS__)

#endif
