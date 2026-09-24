#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;

    cout << "Enter an integer: ";
    cin >> n;

    do
    {
        n = n / 10;
        count++;
    } while (n != 0);

    cout << "Number of digits = " << count;

    return 0;
}