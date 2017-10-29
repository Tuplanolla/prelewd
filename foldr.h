/// Automatically generated code begins.

#ifndef PRELEWD_FOLDR_H
#define PRELEWD_FOLDR_H

#define PRELEWD_FOLDR_2(f, z) z
#define PRELEWD_FOLDR_3(f, z, x0) PRELEWD_APPLY(f, x0, z)
#define PRELEWD_FOLDR_4(f, z, x0, x1) PRELEWD_APPLY(f, x0, PRELEWD_APPLY(f, x1, z))
#define PRELEWD_FOLDR_5(f, z, x0, x1, x2) PRELEWD_APPLY(f, x0, PRELEWD_APPLY(f, x1, PRELEWD_APPLY(f, x2, z)))

#endif

/// Automatically generated code ends.
