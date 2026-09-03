#include <iostream>
#include <string>
using namespace std;

int main()
{
    string firstName, lastName;

    cout << "Enter person's name: ";
    cin >> firstName >> lastName;

    cout << "Abbreviated name: " << firstName[0] << ". " << lastName;

    return 0;
}