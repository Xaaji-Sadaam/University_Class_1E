/*Write and test the following function: double Standard_Deviation (double x[], int n); The function returns the Standard Deviation of numbers stored in an array. The mathematical formula for calculation of standard deviation is*/

#include <iostream>
#include <cmath>

double calculate_mean(double x[], int n) {
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += x[i];
    }
    return sum / n;
}

double Standard_Deviation(double x[], int n) {
    double mean = calculate_mean(x, n);
    double sum_of_squares = 0;

    for (int i = 0; i < n; ++i) {
        double deviation = x[i] - mean;
        sum_of_squares += deviation * deviation;
    }

    return std::sqrt(sum_of_squares / (n - 1));
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive number of elements.\n";
        return 1;
    }

    double *numbers = new double[n];
    std::cout << "Enter " << n << " numbers:\n";

    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    double std_deviation = Standard_Deviation(numbers, n);
    std::cout << "The Standard Deviation is: " << std_deviation << std::endl;

    delete[] numbers;
    return 0;
}
