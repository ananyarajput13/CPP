#include <iostream>
using namespace std;

int main()
{
    int month, year;

    cout << "ENTER MONTH NUMBER (1-12): ";
    cin >> month;

    cout << "ENTER YEAR: ";
    cin >> year;

    switch (month)
    {
        case 1:
            cout << "JANUARY HAS 31 DAYS";
            break;

        case 2:
            if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
                cout << "FEBRUARY HAS 29 DAYS";
            else
                cout << "FEBRUARY HAS 28 DAYS";
            break;

        case 3:
            cout << "MARCH HAS 31 DAYS";
            break;

        case 4:
            cout << "APRIL HAS 30 DAYS";
            break;

        case 5:
            cout << "MAY HAS 31 DAYS";
            break;

        case 6:
            cout << "JUNE HAS 30 DAYS";
            break;

        case 7:
            cout << "JULY HAS 31 DAYS";
            break;

        case 8:
            cout << "AUGUST HAS 31 DAYS";
            break;

        case 9:
            cout << "SEPTEMBER HAS 30 DAYS";
            break;

        case 10:
            cout << "OCTOBER HAS 31 DAYS";
            break;

        case 11:
            cout << "NOVEMBER HAS 30 DAYS";
            break;

        case 12:
            cout << "DECEMBER HAS 31 DAYS";
            break;

        default:
            cout << "INVALID MONTH";
    }

    return 0;
}