
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

int gcd(int a, int b) {
    int big;
    if (a == 0 || b == 0) {
        return 0;
    }
    if (a > b) {
        big = a;
    }
    else {
        big = b;
    }
    for (int i = big; i > 0; i--) {
        if (a % i == 0 & b % i == 0) {
            return i;
            break;
        }
    }
}

TEST_CASE("describe_gcd", "[gcd]") {
    REQUIRE(gcd(2, 4) == 2);
    REQUIRE(gcd(9, 6) == 3);
    REQUIRE(gcd(3, 7) == 1);
    REQUIRE(gcd(4, 4) == 4);
    REQUIRE(gcd(11, 13) == 1);
    REQUIRE(gcd(0, 5) == 0);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
