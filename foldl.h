/// Automatically generated code begins.

#ifndef PRELEWD_FOLDL_H
#define PRELEWD_FOLDL_H

#define PRELEWD_FOLDL_2(f, z) z
#define PRELEWD_FOLDL_3(f, z, x0) PRELEWD_APPLY(f, x0, z)
#define PRELEWD_FOLDL_4(f, z, x0, x1) PRELEWD_APPLY(f, PRELEWD_APPLY(f, z, x0), x1)
#define PRELEWD_FOLDL_5(f, z, x0, x1, x2) PRELEWD_APPLY(f, PRELEWD_APPLY(f, PRELEWD_APPLY(f, z, x0), x1), x2)

#endif

/// Automatically generated code ends.
