/// Preprocessor declaration generation (special header).
///
/// This header does not do anything
/// unless either the header file macro `PRELEWD_DECL_H` or
/// the source file macro `PRELEWD_DECL_C` is defined before its inclusion.
/// The definitions alter the behavior of the macros defined in this file.

#ifdef PRELEWD_DECL_H

#ifdef PRELEWD_DECL_C
#error "Contradictory declaration macro definitions"
#endif

#ifdef PRELEWD_INLINE
#undef PRELEWD_INLINE
#endif

/// Declare an inline function.
#define PRELEWD_INLINE(x, ...) inline x __VA_ARGS__

#ifdef PRELEWD_FUNC
#undef PRELEWD_FUNC
#endif

/// Declare a function.
#define PRELEWD_FUNC(x, ...) x;

#else
#ifdef PRELEWD_DECL_C

#ifdef PRELEWD_INLINE
#undef PRELEWD_INLINE
#endif

/// Define an inline function.
#define PRELEWD_INLINE(x, ...) extern inline x;

#ifdef PRELEWD_FUNC
#undef PRELEWD_FUNC
#endif

/// Define a function.
#define PRELEWD_FUNC(x, ...) x __VA_ARGS__

#endif
#endif
