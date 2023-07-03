#include <iostream>

int main() {
    char choice;
    
    do {
        float num1, num2, result;
        char op;

        std::cout << "Enter <first number> <operator> <second number>: ";
        std::cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                } else {
                    std::cout << "Error: Division by zero!" << std::endl;
                    continue;
                }
                break;
            default:
                std::cout << "Invalid operator!" << std::endl;
                continue;
        }

        std::cout << "Answer = " << result << std::endl;

        std::cout << "Do another calculation? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
