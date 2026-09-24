#include <iostream>
using namespace std;

int main()
{
    int month, year, days, startDay;

    cout << "Enter month (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    // Find number of days in the month
    if (month == 2)
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            days = 29;
        else
            days = 28;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        days = 30;
    else
        days = 31;

    // Find starting day using Zeller's formula
    int m = month;
    int y = year;

    if (m < 3)
    {
        m = m + 12;
        y = y - 1;
    }

    startDay = (1 + (13 * (m + 1)) / 5 + y + y / 4
                - y / 100 + y / 400) % 7;

    cout << "\nSun Mon Tue Wed Thu Fri Sat\n";

    int i = 0;

    do
    {
        if (i < startDay)
            cout << "    ";
        else
            cout << (i - startDay + 1 < 10 ? "  " : " ")
                 << i - startDay + 1 << " ";

        i++;

        if (i % 7 == 0)
            cout << endl;

    } while (i < startDay + days);

    return 0;
}