#include <iostream>
using namespace std;

int main()
{
    int n;
    float a[50], temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Ascending order
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    cout << "\nAscending Order: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\nDescending Order: ";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }

    return 0;
}