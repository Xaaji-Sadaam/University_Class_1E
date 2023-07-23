//Make a function bool Is_Digit(char n) which returns true if the character is between character 0 to 9 else it returns false using inline function.

#include <iostream>

// Inline function to check if the character is a digit (between '0' and '9')
inline bool Is_Digit(char n) {
    return (n >= '0' && n <= '9');
}

int main() {
    char ch;

    // Ask the user to enter a character
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Call the Is_Digit inline function and display the result
    if (Is_Digit(ch)) {
        std::cout << "The character is a digit.\n";
    } else {
        std::cout << "The character is not a digit.\n";
    }

    return 0;
}
