#include <iostream>

int main() {
    double num1, num2;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    if (num1 > num2) {
        std::cout << num1 << " is the maximum number." << std::endl;
    } 
    else if (num2 > num1) {
        std::cout << num2 << " is the maximum number." << std::endl;
    } 
    else {
        std::cout << "Both numbers are equal." << std::endl;
    }

    return 0;
}