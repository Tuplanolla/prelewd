# Prelewd

Parametric polymorphism using the C preprocessor, as a joke.

## How to Use

Let us define a compilation unit called `x` with fully polymorphic components.
First we generate the source file `x.c` as follows.

    #include "x.h"

    #define PRELEWD_DECL_C
    #include "x_any.h"
    #undef PRELEWD_DECL_C

Then we generate the header file `x.h` as follows.

    #ifndef PRELEWD_X_H
    #define PRELEWD_X_H

    #define PRELEWD_DECL_H
    #include "x_any.h"
    #undef PRELEWD_DECL_H

    #endif

Now we can enumerate all the default specializations in `x_any.h`.
These follow the template shown in `template.out.h`.

    #include <prelewd/alias.h>

    #define Any signed_char
    #include "x_any_decl.h"
    #undef Any
    #define Any unsigned_char
    #include "x_any_decl.h"
    #undef Any

The declarations themselves go into `x_any_decl.h`.
Note the carefully placed commas.

    #include <prelewd/cpp.h>

    PRELEWD_INPROC(__attribute__ ((__nonnull__))
    void $(x_mut, Any)(Any *restrict const oy, Any const *restrict const x), {
      *oy = *x;
    })

We are now ready to stop.

## How to Understand

See the diagram in `prelewd.dot`.
