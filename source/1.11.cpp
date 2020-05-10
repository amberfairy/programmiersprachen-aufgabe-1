#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

float fract(float ganzzahl) {
	int intzahl = ganzzahl;
	return ganzzahl - intzahl;
}

TEST_CASE("describe_fract", "[fract]") {
    REQUIRE(fract(42.42424242) == Approx(0.42424242));
    REQUIRE(fract(0) == Approx(0.0));
    REQUIRE(fract(42.24) == Approx(0.24));
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}