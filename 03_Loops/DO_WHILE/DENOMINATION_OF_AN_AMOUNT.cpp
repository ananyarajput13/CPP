#include <iostream>
using namespace std;

int main()
{
    int amount, note, count;

    cout << "Enter amount: ";
    cin >> amount;

    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int i = 0;

    do
    {
        note = notes[i];
        count = amount / note;

        if (count > 0)
        {
            cout << note << " : " << count << " notes" << endl;
            amount = amount % note;
        }

        i++;

    } while (i < 10);

    return 0;
}