/*Make a two argument function called average (double arr, int sz), Call this function in
min() to calculated average of numbers stored in an array.*/

#include <iostream>

// Function to calculate the average of numbers stored in an array
double average(double arr[], int sz) {
    double sum = 0.0;
    for (int i = 0; i < sz; ++i) {
        sum += arr[i];
    }
    return sum / sz;
}

int main() {
    const int size = 5;
    double numbers[size];

    // Ask the user to enter 5 numbers and store them in the array
    std::cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; ++i) {
        std::cin >> numbers[i];
    }

    // Call the average function to calculate the average of the numbers in the array
    double avg = average(numbers, size);

    // Display the calculated average
    std::cout << "Average: " << avg << std::endl;

    return 0;
}
