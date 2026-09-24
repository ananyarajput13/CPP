#include <iostream>
using namespace std;

int main()
{
    int n, sum;

    cout << "Enter a number: ";
    cin >> n;

    do
    {
        sum = 0;

        do
        {
            sum = sum + n % 10;
            n = n / 10;
        } while (n != 0);

        n = sum;

    } while (n >= 10);

    cout << "Generic Root = " << n;

    return 0;
}