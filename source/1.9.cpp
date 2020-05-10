#define CATCH_CONFIG_RUNNER
#include <catch.hpp>


int checksum(int zahl) {
    int sum = 0;
    if (zahl <= 0) {
        return 0;
    }
    else {
        while (zahl > 0) {
            sum = sum + zahl % 10;
            zahl = zahl / 10;
        }
        /*std::cout << sum << std::endl;*/
        return sum;
    }
}

TEST_CASE("describe_checksum", "[checksum]") {
    REQUIRE(checksum(143) == 8);
    REQUIRE(checksum(121041) == 9);
    REQUIRE(checksum(541649328) == 42);
    REQUIRE(checksum(-24) == 0);
    REQUIRE(checksum(0) == 0);
}

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}