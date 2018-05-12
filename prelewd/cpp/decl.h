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

#ifdef PRELEWD_PROC
#undef PRELEWD_PROC
#endif

/// Declare a procedure.
#define PRELEWD_PROC(x, ...) x;

#ifdef PRELEWD_INPROC
#undef PRELEWD_INPROC
#endif

/// Declare an inline procedure.
#define PRELEWD_INPROC(x, ...) inline x __VA_ARGS__

#ifdef PRELEWD_TYPE
#undef PRELEWD_TYPE
#endif

/// Declare a private type (structure or enumeration).
#define PRELEWD_TYPE(x, ...) x;

#ifdef PRELEWD_INTYPE
#undef PRELEWD_INTYPE
#endif

/// Declare a public type (structure or enumeration).
#define PRELEWD_INTYPE(x, ...) x __VA_ARGS__;

#else
#ifdef PRELEWD_DECL_C

#ifdef PRELEWD_PROC
#undef PRELEWD_PROC
#endif

/// Define a procedure.
#define PRELEWD_PROC(x, ...) x __VA_ARGS__

#ifdef PRELEWD_INPROC
#undef PRELEWD_INPROC
#endif

/// Define an inline procedure.
#define PRELEWD_INPROC(x, ...) extern inline x;

#ifdef PRELEWD_TYPE
#undef PRELEWD_TYPE
#endif

/// Define a private type (structure or enumeration).
#define PRELEWD_TYPE(x, ...) x __VA_ARGS__;

#ifdef PRELEWD_INTYPE
#undef PRELEWD_INTYPE
#endif

/// Define a public type (structure or enumeration).
#define PRELEWD_INTYPE(x, ...)

#endif
#endif
