#include <iostream>

int main() {
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Check for negative or invalid age input
    if (age < 0) {
        std::cout << "Invalid input! Age cannot be negative." << std::endl;
    } 
    // Check voting eligibility (18 years or older)
    else if (age >= 18) {
        std::cout << "Eligible to vote." << std::endl;
    } 
    // Under 18
    else {
        int yearsLeft = 18 - age;
        std::cout << "Not eligible to vote. You can vote in " << yearsLeft << " year(s)." << std::endl;
    }

    return 0;
}