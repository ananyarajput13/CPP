#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "ENTER TWO NUMBERS: ";
    cin >> a >> b;

    if (a > b)
        cout << "MAXIMUM = " << a;
    else if (b > a)
        cout << "MAXIMUM = " << b;
    else
        cout << "BOTH NUMBERS ARE EQUAL";

    return 0;
}