#include <iostream>
using namespace std;

int main()
{
    int num, original, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == original)
        cout << original << " is an Armstrong Number";
    else
        cout << original << " is not an Armstrong Number";

    return 0;
}

