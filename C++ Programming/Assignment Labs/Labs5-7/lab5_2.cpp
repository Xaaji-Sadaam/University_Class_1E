#include <iostream>

int main() {
    // Get input from the user
    int number;
    std::cout << "Enter a Number: ";
    std::cin >> number;

    // Perform arithmetic shift left
    std::cout << number << " << 0 = " << (number << 0) << std::endl;
    std::cout << number << " << 2 = " << (number << 2) << std::endl;
    std::cout << number << " << 4 = " << (number << 4) << std::endl;
    std::cout << number << " << 6 = " << (number << 6) << std::endl;
    std::cout << number << " << 8 = " << (number << 8) << std::endl;
    std::cout << number << " << 10 = " << (number << 10) << std::endl;

    // Perform arithmetic shift right
    std::cout << number << " >> 0 = " << (number >> 0) << std::endl;
    std::cout << number << " >> 2 = " << (number >> 2) << std::endl;
    std::cout << number << " >> 4 = " << (number >> 4) << std::endl;
    std::cout << number << " >> 6 = " << (number >> 6) << std::endl;
    std::cout << number << " >> 8 = " << (number >> 8) << std::endl;
    
    return 0;
}
