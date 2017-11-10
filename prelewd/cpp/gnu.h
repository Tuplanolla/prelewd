/// Preprocessor GNU extension compatibility.

#ifndef PRELEWD_GNU_H
#define PRELEWD_GNU_H

#ifndef __GNUC__

#ifndef __attribute__

/// Avoid compatibility errors.
///
/// The keyword `__attribute__` does nothing
/// unless GNU extensions are supported.
#define __attribute__(x)

#endif

#endif

#endif
