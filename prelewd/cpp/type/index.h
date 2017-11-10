/// Preprocessor macro family indexing.

#ifndef PRELEWD_INDEX_H
#define PRELEWD_INDEX_H

/// Look up a macro from an indexed family of macros.
///
/// The macro invocation `PRELEWD_INDEX(x, 2)` expands
/// to `x_2` in this case of three or more macros
/// indexed by consecutive unsigned integers.
#define PRELEWD_INDEX(x, y) x##_##y

#endif
