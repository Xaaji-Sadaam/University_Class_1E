#include <iostream>

int main() {
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum += i;
    }

    std::cout << "Sum: " << sum << std::endl; 

    return 0;
}
