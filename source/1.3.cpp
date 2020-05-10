#include <iostream> // contains "std::cout" (& more)

int main() {
    int k = 0;
    for (int i = 20; i > 0; i++) {
        for (int j = 11; j <= 20; j++) {
            if (i % j != 0) {
                break;
            
            }
            if (j == 20) {
                std::cout << i << std::endl;
                k = 1;
                break;
            }
        }
        if (k == 1) { break; }
    }
}