#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <iostream> // contains "std::cout" (& more)
int sum_multiples(int max) {
    int sum = 0;
    for (int i = 1; i <= max; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }
    /*std::cout << sum << std::endl;*/
    return sum;
}


TEST_CASE("describe_sum_multiples", "[sum_multiples]") {
    REQUIRE(sum_multiples(10) == 33);
    REQUIRE(sum_multiples(1000) == 234168);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}