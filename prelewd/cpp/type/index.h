/// Preprocessor macro family indexing.

#ifndef PRELEWD_INDEX_H
#define PRELEWD_INDEX_H

/// Look up a macro from an indexed family of macros.
///
/// The macro invocation `PRELEWD_INDEX(x, 2)` expands
/// to `x__2` in this case of three or more macros
/// indexed by consecutive unsigned integers.
/// Two underscores are used as the separator,
/// because it usually only appears in the beginning of reserved names.
#define PRELEWD_INDEX(x, y) x##__##y

#endif
