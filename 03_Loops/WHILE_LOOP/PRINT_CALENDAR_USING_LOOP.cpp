#include <iostream>
using namespace std;

int main()
{
    int days;

    cout << "Enter number of days in the month (1-31): ";
    cin >> days;

    if (days < 1 || days > 31)
    {
        cout << "Invalid number of days!";
        return 0;
    }

    cout << "\nCalendar:\n";

    for (int i = 1; i <= days; i++)
    {
        cout << i << "\t";

        if (i % 7 == 0)
            cout << endl;
    }

    return 0;
}