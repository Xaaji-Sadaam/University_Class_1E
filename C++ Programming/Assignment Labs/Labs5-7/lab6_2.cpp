#include <iostream>

int main() {
    // Ask the student for their year
    int year;
    std::cout << "What year student are you? (Enter 1, 2, 3, or 4): ";
    std::cin >> year;

    // Ask the student for their GPA
    float gpa;
    std::cout << "Enter your GPA: ";
    std::cin >> gpa;

    // Check the conditions to determine graduation status
    if (gpa >= 2.5 && year >= 4) {
        std::cout << "Congratulations! You will graduate." << std::endl;
    } else {
        std::cout << "Sorry, you will not graduate." << std::endl;
    }

    return 0;
}
