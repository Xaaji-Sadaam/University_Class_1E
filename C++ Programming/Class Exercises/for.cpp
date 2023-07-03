#include <iostream>

int main() {
    int product = 1;

    for (int i = 1; i <= 6; i += 2) {
        product *= i;
    }

    std::cout << "The product is: " << product << std::endl;

    return 0;
}
