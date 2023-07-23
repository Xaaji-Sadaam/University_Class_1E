/*//Ask the user to enter the integer value, once the value is entered, it should be shown whether it is an odd number or even number. Make two function one is named as void odd (int) other should be named as void even(int). The program must execute until user enters 0 value.*/

#include <iostream>

// Function to check if the number is odd
void odd(int num) {
    if (num % 2 != 0) {
        std::cout << num << " is an odd number.\n";
    } else {
        std::cout << num << " is not an odd number.\n";
    }
}

// Function to check if the number is even
void even(int num) {
    if (num % 2 == 0) {
        std::cout << num << " is an even number.\n";
    } else {
        std::cout << num << " is not an even number.\n";
    }
}

int main() {
    int num;

    do {
        // Ask the user to enter the integer value
        std::cout << "Enter an integer value (or 0 to exit): ";
        std::cin >> num;

        // Check if the number is zero; if so, exit the loop
        if (num == 0) {
            std::cout << "Exiting the program.\n";
            break;
        }

        // Check if the number is odd or even using the appropriate functions
        if (num != 0) {
            odd(num);
            even(num);
        }

    } while (true); // Loop will keep running until 'break' is encountered

    return 0;
}
