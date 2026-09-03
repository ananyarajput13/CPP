#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter full name: ";
    getline(cin, name);

    cout << name[0] << ". ";

    // Print the last name
    int i = name.length() - 1;

    while (i >= 0 && name[i] != ' ')
        i--;

    cout << name.substr(i + 1);

    return 0;
}