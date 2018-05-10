/// Preprocessor GNU extension compatibility.

#ifndef PRELEWD_GNU_H
#define PRELEWD_GNU_H

#ifndef __GNUC__

#ifndef __attribute__

/// Ignore attributes.
///
/// If the GNU extension keyword `__attribute__` is missing,
/// this definition makes it disappear
/// instead of producing an error during compilation.
/// Doing so is reasonable as long as only optional extensions are ever used.
#define __attribute__(x)

#endif

#endif

#endif
