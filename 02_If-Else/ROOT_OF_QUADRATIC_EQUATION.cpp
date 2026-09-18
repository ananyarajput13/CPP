#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, D, r1, r2;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);

        cout << "Roots are: " << r1 << " and " << r2;
    }
    else if (D == 0)
    {
        r1 = -b / (2 * a);

        cout << "Roots are equal: " << r1;
    }
    else
    {
        cout << "Roots are complex";
    }

    return 0;
}