/// Preprocessor conflict avoidance.

#ifndef PRELEWD_DEBUG_H
#define PRELEWD_DEBUG_H

#ifdef DEBUG

#ifdef NDEBUG
#error "Contradictory macro definitions"
#endif

#else

#ifndef NDEBUG
#define NDEBUG
#endif

#endif

#endif
