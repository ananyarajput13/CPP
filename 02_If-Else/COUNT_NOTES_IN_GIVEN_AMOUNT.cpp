
#include <iostream>
using namespace std;

int main()
{
    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    if (amount >= 500)
    {
        cout << "500 notes = " << amount / 500 << endl;
        amount = amount % 500;
    }

    if (amount >= 200)
    {
        cout << "200 notes = " << amount / 200 << endl;
        amount = amount % 200;
    }

    if (amount >= 100)
    {
        cout << "100 notes = " << amount / 100 << endl;
        amount = amount % 100;
    }

    if (amount >= 50)
    {
        cout << "50 notes = " << amount / 50 << endl;
        amount = amount % 50;
    }

    if (amount >= 20)
    {
        cout << "20 notes = " << amount / 20 << endl;
        amount = amount % 20;
    }

    if (amount >= 10)
    {
        cout << "10 notes = " << amount / 10 << endl;
        amount = amount % 10;
    }

    if (amount > 0)
        cout << "Remaining amount = " << amount << endl;

    return 0;
}
