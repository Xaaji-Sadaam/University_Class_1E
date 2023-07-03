#include <iostream>

int main() {
    // Ask the user to enter their age
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Check age conditions and display appropriate messages
    if (age < 0 || age > 160) {
        std::cout << "You're lying - you CANNOT be that age." << std::endl;
    } else if (age >= 35 && age <= 80) {
        std::cout << "You can save money on your car insurance." << std::endl;
    } else if ((age >= 0 && age <= 34) || (age >= 81 && age <= 160)) {
        std::cout << "Sorry, we don't have any deals for you today!" << std::endl;
    }

    return 0;
}
