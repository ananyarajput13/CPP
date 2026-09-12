#include <iostream>

int main() {
    int day, month, year;
    bool isValid = true;

    std::cout << "Enter day, month, and year: ";
    std::cin >> day >> month >> year;

    // Basic year check (must be a positive number)
    if (year < 1) {
        isValid = false;
    }
    // Basic month check (1 to 12)
    else if (month < 1 || month > 12) {
        isValid = false;
    }
    // Basic day check (cannot be less than 1)
    else if (day < 1) {
        isValid = false;
    }
    else {
        // Determine number of days in the month
        int maxDays = 31;

        if (month == 4 || month == 6 || month == 9 || month == 11) {
            maxDays = 30;
        } 
        else if (month == 2) {
            // Check for leap year logic
            bool isLeapYear = false;

            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                isLeapYear = true;
            }

            if (isLeapYear) {
                maxDays = 29;
            } else {
                maxDays = 28;
            }
        }

        // Validate the entered day against maxDays
        if (day > maxDays) {
            isValid = false;
        }
    }

    // Display result
    if (isValid) {
        std::cout << "Valid Date" << std::endl;
    } else {
        std::cout << "Invalid Date" << std::endl;
    }

    return 0;
}