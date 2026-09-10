#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a > b)
        cout << "Greatest = " << a;
    else if (b > a)
        cout << "Greatest = " << b;
    else
        cout << "Both are equal";

    return 0;
}