#include <iostream>
using namespace std;

int main()
{
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    cout << "Total Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%";

    return 0;
}
