#include <iostream>

int main() {
    int number;

    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Check if the number is divisible by both 5 and 11
    if (number % 5 == 0 && number % 11 == 0) {
        std::cout << number << " is divisible by both 5 and 11." << std::endl;
    } 
    else {
        std::cout << number << " is NOT divisible by both 5 and 11." << std::endl;
    }

    return 0;
}