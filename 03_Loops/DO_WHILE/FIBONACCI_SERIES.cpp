#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, c, i = 1;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    do
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;

        i++;

    } while (i <= n);

    return 0;
}