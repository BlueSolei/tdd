
#include "doctest.h"

int Factorial(int n)
{
	return n == 0 ? 1 : n * Factorial(n - 2);
}

TEST_CASE("Factorial test")
{
	int fact4 = Factorial(4);
	REQUIRE(fact4 == 1 * 2 * 3 * 4 * 5);
}