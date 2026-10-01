#include <iostream>
using namespace std;

int main()
{
    float r, h, circumference, volume;
    const float pi = 3.14159;

    cout << "Enter radius: ";
    cin >> r;

    cout << "Enter height: ";
    cin >> h;

    circumference = 2 * pi * r;
    volume = pi * r * r * h;

    cout << "Radius = " << r << endl;
    cout << "Circumference = " << circumference << endl;
    cout << "Volume = " << volume << endl;

    return 0;
}