#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of IP addresses: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "192.168.1." << i << endl;
    }

    return 0;
}