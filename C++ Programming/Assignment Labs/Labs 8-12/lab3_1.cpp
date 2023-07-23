//Calculate Sum of Natural numbers using Recursion:

#include <iostream>

// Recursive function to calculate the sum of natural numbers
int sumOfNaturalNumbers(int n) {
    if (n == 1) {
        return 1; // Base case: When n becomes 1, return 1.
    } else {
        return n + sumOfNaturalNumbers(n - 1); // Recursive call to sumOfNaturalNumbers with n-1.
    }
}

int main() {
    int num;

    // Ask the user to enter a positive integer
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num <= 0) {
        std::cout << "Please enter a positive integer.\n";
    } else {
        // Call the sumOfNaturalNumbers function
        int result = sumOfNaturalNumbers(num);

        // Display the sum of natural numbers
        std::cout << "Sum of natural numbers from 1 to " << num << " is: " << result << std::endl;
    }

    return 0;
}
