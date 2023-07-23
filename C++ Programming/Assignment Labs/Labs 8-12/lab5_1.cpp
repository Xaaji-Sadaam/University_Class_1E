/*Write a program to find the number of times a character “a” is appeared in a C Sting “We are shinning stars of Pakistan”.*/

#include <iostream>
#include <cstring>

int countCharInCString(const char* str, char ch) {
    int count = 0;
    while (*str != '\0') {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    const char* cString = "We are shining stars of Pakistan";
    char targetChar = 'a';

    int occurrences = countCharInCString(cString, targetChar);

    std::cout << "The character '" << targetChar << "' appeared " << occurrences << " times in the C string." << std::endl;

    return 0;
}
