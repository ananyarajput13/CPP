#include <iostream>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    cout << "Vowels are: ";

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
<<<<<<< HEAD
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
=======
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
>>>>>>> f713fe2cd96c0fe30829b4164c6b1bbf3ed9aa48
            str[i] == 'O' || str[i] == 'U') {

            cout << str[i] << " ";
        }
    }

    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> f713fe2cd96c0fe30829b4164c6b1bbf3ed9aa48
