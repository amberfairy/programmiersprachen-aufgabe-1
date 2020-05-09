#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream> // contains "std::cout" (& more)

int factorial(int zahl){
	if (zahl == 1 || zahl == 0) {
		return 1;
	}
	return zahl * factorial(zahl - 1);
}

TEST_CASE("describe_factorial", "[factorial]") {
    REQUIRE(factorial(5) == 120);
    REQUIRE(factorial(0) == 1);
    /*REQUIRE(factorial(42) == 1405006117752879898543142606244511569936384000000000);  ist zu lang :c */
	REQUIRE(factorial(10) == 3628800);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}