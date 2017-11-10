/// Preprocessor integer sequence generation.

#ifndef PRELEWD_SEQ_H
#define PRELEWD_SEQ_H

#include "eval.h"

#include "seqr.out.h"

/// Generate a sequence of consecutive unsigned integers.
///
/// The macro invocation `PRELEWD_SEQR(3)`
/// expands to the sequence `0, 1, 2, 3` in this case of three arguments.
#define PRELEWD_SEQR(...) PRELEWD_EVAL(PRELEWD_SEQR, __VA_ARGS__)

#include "seql.out.h"

/// Generate a sequence of consecutive unsigned integers in reverse.
///
/// The macro invocation `PRELEWD_SEQL(3)`
/// expands to the sequence `3, 2, 1, 0` in this case of three arguments.
#define PRELEWD_SEQL(...) PRELEWD_EVAL(PRELEWD_SEQL, __VA_ARGS__)

#endif
