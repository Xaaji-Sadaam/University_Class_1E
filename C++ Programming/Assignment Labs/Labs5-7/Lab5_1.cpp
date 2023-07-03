#include <iostream>

int main() {
    // Get input from the user
    int num1, num2;
    std::cout << "Enter 1st Number: ";
    std::cin >> num1;
    std::cout << "Enter 2nd Number: ";
    std::cin >> num2;

    // Perform bitwise operations
    int bitwise_and = num1 & num2;
    int bitwise_or = num1 | num2;
    int bitwise_xor = num1 ^ num2;

    // Display the results
    std::cout << num1 << " & " << num2 << " = " << bitwise_and << std::endl;
    std::cout << num1 << " | " << num2 << " = " << bitwise_or << std::endl;
    std::cout << num1 << " ^ " << num2 << " = " << bitwise_xor << std::endl;

    return 0;
}
