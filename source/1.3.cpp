#include <iostream> // contains "std::cout" (& more)

int main() {
    for (int i = 11; i > 0; i++) {
        if (i % 11 == 0 &
            i % 12 == 0 &
            i % 13 == 0 &
            i % 14 == 0 &
            i % 15 == 0 &
            i % 16 == 0 &
            i % 17 == 0 &
            i % 18 == 0 &
            i % 19 == 0 &
            i % 20 == 0) {
            std::cout << i << std::endl;
            break;
        }
    }
}