#include <cheat.h>
#include <cheats.h>

CHEAT_DECLARE(
  static int const val = 64;
)

CHEAT_TEST(add_ovf_sint,
  for (int minval = -val; minval <= -1; ++minval)
    for (int maxval = 1; maxval <= val; ++maxval)
      for (int x = minval; x <= maxval; ++x)
        for (int y = minval; y <= maxval; ++y) {
          cheat_assert_not(
              (y > 0 && (maxval - y < minval || maxval - y > maxval)) ||
              (y < 0 && (minval - y < minval || minval - y > maxval)));
          cheat_assert_int(
              (y > 0 && maxval - y < x) ||
              (y < 0 && minval - y > x),
              x + y < minval ||
              x + y > maxval);
        }
)

CHEAT_TEST(add_ovf_uint,
  for (int maxval = 1; maxval <= val; ++maxval)
    for (int x = 0; x <= maxval; ++x)
      for (int y = 0; y <= maxval; ++y) {
        cheat_assert_not(
            maxval - y < 0 || maxval - y > maxval);
        cheat_assert_int(
            maxval - y < x,
            x + y < 0 ||
            x + y > maxval);
      }
)

CHEAT_TEST(neg_ovf_sint,
  for (int minval = -val; minval <= -1; ++minval)
    for (int maxval = 1; maxval <= val; ++maxval)
      for (int x = minval; x <= maxval; ++x) {
        cheat_assert_not(
            (x > 0 && (minval + x < minval || minval + x > maxval)) ||
            (x < 0 && (maxval + x < minval || maxval + x > maxval)));
        cheat_assert_int(
            (x > 0 && minval + x > 0) ||
            (x < 0 && maxval + x < 0),
            -x < minval ||
            -x > maxval);
      }
)

CHEAT_TEST(sub_ovf_sint,
  for (int minval = -val; minval <= -1; ++minval)
    for (int maxval = 1; maxval <= val; ++maxval)
      for (int x = minval; x <= maxval; ++x)
        for (int y = minval; y <= maxval; ++y) {
          cheat_assert_not(
              (y > 0 && (minval + y < minval || minval + y > maxval)) ||
              (y < 0 && (maxval + y < minval || maxval + y > maxval)));
          cheat_assert_int(
              (y > 0 && minval + y > x) ||
              (y < 0 && maxval + y < x),
              x - y < minval ||
              x - y > maxval);
        }
)

CHEAT_TEST(sub_ovf_uint,
  for (int maxval = 1; maxval <= val; ++maxval)
    for (int x = 0; x <= maxval; ++x)
      for (int y = 0; y <= maxval; ++y)
        cheat_assert_int(
            y > x,
            x - y < 0 ||
            x - y > maxval);
)

CHEAT_TEST(mul_ovf_sint,
  for (int minval = -val; minval <= -1; ++minval)
    for (int maxval = 1; maxval <= val; ++maxval)
      for (int x = minval; x <= maxval; ++x)
        for (int y = minval; y <= maxval; ++y) {
          if (minval + maxval <= 0) {
            cheat_assert_not(
                x != 0 && (x > 0 ?
                  (y > 0 ? maxval / x < minval || maxval / x > maxval :
                    minval / x < minval || minval / x > maxval) :
                  (y > 0 ? minval / y < minval || minval / y > maxval :
                    maxval / x < minval || maxval / x > maxval)));
            cheat_assert_int(
                x != 0 && (x > 0 ?
                  (y > 0 ? maxval / x < y :
                    minval / x > y) :
                  (y > 0 ? minval / y > x :
                    maxval / x > y)),
                x * y < minval ||
                x * y > maxval);
          } else if (minval + maxval >= 0) {
            cheat_assert_not(
                x != 0 && (x > 0 ?
                  (y > 0 ? maxval / x < minval || maxval / x > maxval :
                    minval / x < minval || minval / x > maxval) :
                  (y > 0 ? minval / y < minval || minval / y > maxval :
                    maxval / -x < minval || maxval / -x > maxval ||
                    -y < minval || -y > maxval)));
            cheat_assert_int(
                x != 0 && (x > 0 ?
                  (y > 0 ? maxval / x < y :
                    minval / x > y) :
                  (y > 0 ? minval / y > x :
                    maxval / -x < -y)),
                x * y < minval ||
                x * y > maxval);
          }
        }
)

CHEAT_TEST(mul_ovf_uint,
  for (int maxval = 1; maxval <= val; ++maxval)
    for (int x = 0; x <= maxval; ++x)
      for (int y = 0; y <= maxval; ++y) {
        cheat_assert_not(
            x != 0 &&
            (maxval / x < 0 || maxval / x > maxval));
        cheat_assert_int(
            x != 0 &&
            maxval / x < y,
            x * y < 0 ||
            x * y > maxval);
      }
)

CHEAT_TEST(quott_ovf_sint,
  for (int minval = -val; minval <= -1; ++minval)
    for (int maxval = 1; maxval <= val; ++maxval)
      for (int x = minval; x <= maxval; ++x)
        for (int y = minval; y <= maxval; ++y)
          if (y != 0) {
            if (minval + maxval <= 0 && minval / 2 + maxval >= 0) {
              cheat_assert_not(
                  -maxval < minval || -maxval > maxval);
              cheat_assert_int(
                  x < -maxval && y < 0 && y == -1,
                  x / y < minval ||
                  x / y > maxval);
            } else if (minval + maxval >= 0 && minval + maxval / 2 <= 0) {
              cheat_assert_not(
                  -minval < minval || -minval > maxval);
              cheat_assert_int(
                  x > -minval && y < 0 && y == -1,
                  x / y < minval ||
                  x / y > maxval);
            }
          }
)

CHEAT_TEST(quott_ovf_uint,
  for (int maxval = 1; maxval <= val; ++maxval)
    for (int x = 0; x <= maxval; ++x)
      for (int y = 0; y <= maxval; ++y)
        if (y != 0)
          cheat_assert_int(
              false,
              x / y < 0 ||
              x / y > maxval);
)

CHEAT_TEST(remt_ovf_sint,
  for (int minval = -val; minval <= -1; ++minval)
    for (int maxval = 1; maxval <= val; ++maxval)
      for (int x = minval; x <= maxval; ++x)
        for (int y = minval; y <= maxval; ++y)
          if (y != 0) {
            cheat_assert_int(
                false,
                x % y < minval ||
                x % y > maxval);
          }
)

CHEAT_TEST(remt_ovf_uint,
  for (int maxval = 1; maxval <= val; ++maxval)
    for (int x = 0; x <= maxval; ++x)
      for (int y = 0; y <= maxval; ++y)
        if (y != 0)
          cheat_assert_int(
              false,
              x % y < 0 ||
              x % y > maxval);
)
