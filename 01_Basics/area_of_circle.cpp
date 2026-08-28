#include <iostream>
using namespace std;

int main()
{
    float r, area, circumference;
    const float pi = 3.14;

    cout << "Enter radius: ";
    cin >> r;

    area = pi * r * r;
    circumference = 2 * pi * r;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}