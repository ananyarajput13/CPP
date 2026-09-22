#include <iostream>
using namespace std;

int main()
{
    int amount;

    cout << "Enter amount: ";
    cin >> amount;

    cout << "₹500 notes = " << amount / 500 << endl;
    amount = amount % 500;

    cout << "₹200 notes = " << amount / 200 << endl;
    amount = amount % 200;

    cout << "₹100 notes = " << amount / 100 << endl;
    amount = amount % 100;

    cout << "₹50 notes = " << amount / 50 << endl;
    amount = amount % 50;

    cout << "₹20 notes = " << amount / 20 << endl;
    amount = amount % 20;

    cout << "₹10 notes = " << amount / 10 << endl;
    amount = amount % 10;

    cout << "₹5 coins = " << amount / 5 << endl;
    amount = amount % 5;

    cout << "₹2 coins = " << amount / 2 << endl;
    amount = amount % 2;

    cout << "₹1 coins = " << amount / 1 << endl;

    return 0;
}