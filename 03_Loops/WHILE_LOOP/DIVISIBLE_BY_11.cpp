#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 11 == 0)
        cout << "Number is divisible by 11";
    else
        cout << "Number is not divisible by 11";

    return 0;
}