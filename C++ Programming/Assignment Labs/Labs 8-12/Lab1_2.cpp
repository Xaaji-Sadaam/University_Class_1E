/*Write a program that subtracts two numbers until and unless user enters first number equals to 1 using do…while loop ?*/

#include <iostream>

int main() {
    // Declare variables to store user input and result
    int num1, num2, result;

    do {
        // Ask the user to enter two numbers
        std::cout << "Enter the first number: ";
        std::cin >> num1;

        // Check if the first number is equal to 1; if so, exit the loop
        if (num1 == 1) {
            std::cout << "Exiting the program. First number is 1.\n";
            break;
        }

        std::cout << "Enter the second number: ";
        std::cin >> num2;

        // Perform the subtraction and store the result in the 'result' variable
        result = num1 - num2;

        // Display the result
        std::cout << "Result: " << result << "\n";

    } while (true); // Loop will keep running until 'break' is encountered

    return 0;
}
