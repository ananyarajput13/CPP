#include <iostream>
using namespace std;

int main()
{
    int choice;
    float temp, result;

    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temp;

    switch (choice)
    {
        case 1:
            result = (temp * 9 / 5) + 32;
            cout << "Fahrenheit = " << result;
            break;

        case 2:
            result = (temp - 32) * 5 / 9;
            cout << "Celsius = " << result;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}