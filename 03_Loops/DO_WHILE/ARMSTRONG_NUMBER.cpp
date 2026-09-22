#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, original, digit, sum = 0, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    // Count number of digits
    do
    {
        count++;
        n = n / 10;
    } while (n != 0);

    n = original;

    // Calculate Armstrong sum
    do
    {
        digit = n % 10;
        sum = sum + pow(digit, count);
        n = n / 10;
    } while (n != 0);

    if (sum == original)
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}