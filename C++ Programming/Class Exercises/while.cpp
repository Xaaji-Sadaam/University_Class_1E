#include <iostream>

int main() {
    int product = 1;
    int count = 1;

    while (count <= 6) {
        if (count % 2 != 0) {
            product *= count;
        }
        count++;
    }

    std::cout << "Product of the odd numbers among the first 6 positive integers: " << product << std::endl;

    return 0;
}
