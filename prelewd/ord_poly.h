#include "cpp.h"
#include "gnu.h"

__attribute__ ((__const__, __pure__))
inline A $(min, A)(A const x, A const y) {
  return x < y ? x : y;
}

__attribute__ ((__const__, __pure__))
inline A $(max, A)(A const x, A const y) {
  return x > y ? x : y;
}

__attribute__ ((__const__, __pure__))
inline int $(cmp, A)(A const x, A const y) {
  return x < y ? -1 : x > y ? 1 : 0;
}

#ifdef NDEBUG
__attribute__ ((__const__, __pure__))
#endif
inline A $(clamp, A)(A const x, A const a, A const b) {
  dynamic_assert(b >= a, "Degenerate interval");

  return x < a ? a : x > b ? b : x;
}
