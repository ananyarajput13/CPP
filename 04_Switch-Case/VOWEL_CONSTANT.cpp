#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "ENTER A CHARACTER: ";
    cin >> ch;

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "VOWEL";
            break;

        default:
            cout << "CONSONANT";
    }

    return 0;
}