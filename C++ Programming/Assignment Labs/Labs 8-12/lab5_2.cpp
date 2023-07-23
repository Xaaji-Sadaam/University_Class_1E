/*Write program takes a text from the user and remove all the characters except alphabets.*/

#include <iostream>
#include <cctype> // For isalpha() function

int main() {
    std::string text;

    // Ask the user to enter the text
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    // Remove non-alphabetic characters from the text
    std::string cleanedText;
    for (char c : text) {
        if (std::isalpha(c)) {
            cleanedText += c;
        }
    }

    // Display the cleaned text
    std::cout << "Cleaned text (only alphabets): " << cleanedText << std::endl;

    return 0;
}
