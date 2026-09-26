#include <iostream>
using namespace std;

int main()
{
    int n, temp, digit, sum = 0;

    cout << "Enter an integer: ";
    cin >> n;

    temp = n;

    do
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    } while (temp != 0);

    if (n % 11 == 0)
        cout << n << " is divisible by 11";
    else
        cout << n << " is not divisible by 11";

    return 0;
}