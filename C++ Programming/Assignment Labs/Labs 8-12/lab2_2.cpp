//Write a function called zero_smaller(int &, int &) that is passed two int arguments by reference and then sets the smaller of the two numbers to 0. Write a main() program to exercise this function.

#include <iostream>

// Function to set the smaller of the two numbers to 0
void zero_smaller(int &num1, int &num2) {
    if (num1 < num2) {
        num1 = 0;
    } else {
        num2 = 0;
    }
}

int main() {
    int num1, num2;

    // Ask the user to enter two integer values
    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Call the zero_smaller function passing the arguments by reference
    zero_smaller(num1, num2);

    // Display the updated values of the two integers
    std::cout << "Updated first integer: " << num1 << std::endl;
    std::cout << "Updated second integer: " << num2 << std::endl;

    return 0;
}
