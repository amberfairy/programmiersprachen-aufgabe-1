#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <catch.hpp>
#include <iostream> // contains "std::cout" (& more)
#include <cmath>

double Vzyl(double r , double h) {
	return M_PI * r * r * h;
}

double Ozyl(double r, double h) {
	return 2 * M_PI * r * (r + h);
}

TEST_CASE("describe_Vzyl", "[sum_Vzyl]") {
    REQUIRE(Vzyl(5,10) == Approx(785.398));
    REQUIRE(Ozyl(5,10) == Approx(471.239));

    REQUIRE(Vzyl(4200, 4242) == Approx(235081859684.35));
    REQUIRE(Ozyl(4200, 4242) == Approx(222779131.525));
}

int main(int argc, char* argv[]){
    return Catch::Session().run(argc, argv);
}