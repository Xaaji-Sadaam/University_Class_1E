#include <iostream>
#include <limits> // Include the <limits> header explicitly

int main() {
    int drinkChoice;

    while (true) {
        std::cout << "Enter your drink choice (1-Coffee, 2-Tea, 3-Coke, 4-Orange juice): ";
        if (!(std::cin >> drinkChoice) || drinkChoice < 1 || drinkChoice > 4) {
            std::cout << "Invalid input. Please enter a valid drink choice." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    // Process the valid drink choice
    switch (drinkChoice) {
        case 1:
            std::cout << "You chose Coffee." << std::endl;
            break;
        case 2:
            std::cout << "You chose Tea." << std::endl;
            break;
        case 3:
            std::cout << "You chose Coke." << std::endl;
            break;
        case 4:
            std::cout << "You chose Orange juice." << std::endl;
            break;
    }

    return 0;
}
