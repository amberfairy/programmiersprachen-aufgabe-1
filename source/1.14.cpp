#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

bool is_prime(int zahl) {
	bool finished = false;
	if (zahl > 3) {
		for (int i = 2; i < zahl; i++) {
			if (zahl % i == 0) {
				return false;
				finished = true;
				break;
			}
		}
		if (finished != true) {
			return true;
		}
	}
	else if(zahl == 1){
		return false;
	}
	else {
		return true;
	}
}

TEST_CASE("describe_is_prime", "[is_prime]") {
	REQUIRE(is_prime(1) == false);
	REQUIRE(is_prime(3) == true);
	REQUIRE(is_prime(13) == true);
	REQUIRE(is_prime(42) == false);
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}