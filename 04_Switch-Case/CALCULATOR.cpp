#include <iostream>
using namespace std;

int main()
{
    float a, b, result;
    char op;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> b;

    switch (op)
    {
        case '+':
            result = a + b;
            cout << "Result = " << result;
            break;

        case '-':
            result = a - b;
            cout << "Result = " << result;
            break;

        case '*':
            result = a * b;
            cout << "Result = " << result;
            break;

        case '/':
            if (b != 0)
            {
                result = a / b;
                cout << "Result = " << result;
            }
            else
            {
                cout << "Cannot divide by zero";
            }
            break;

        default:
            cout << "Invalid operator";
    }

    return 0;
}