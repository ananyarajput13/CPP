#include <iostream>
using namespace std;

int main()
{
    int n, original, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    do
    {
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;

    } while (n != 0);

    if (original == reverse)
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}