/* get cheat.h from
 * wget http://github.com/Tuplanolla/cheat/raw/master/cheat.h
 */

#include "cheat.h"

CHEAT_TEST(test_factorial,
		cheat_assert(factorial(-1) == 0);
		cheat_assert(factorial(0) == 0);
		cheat_assert(factorial(1) == 1);
	  )

