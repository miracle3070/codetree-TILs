#include <iostream>
using namespace std;

int numOfDays(int month, int days)
{
    int daysOfMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total = 0;

    for(int i=1; i<month; i++)
    {
        total += daysOfMonth[i];
    }
    total += days;
    return total;
}

string getDayOfWeek(int days)
{
    int dayOfWeek = ((days % 7) + 7) % 7;
    switch (dayOfWeek)
    {
        case 0:
            return "Mon";
        case 1:
            return "Tue";
        case 2:
            return "Wed";
        case 3:
            return "Thu";
        case 4:
            return "Fri";
        case 5:
            return "Sat";
        case 6:
            return "Sun";
        default:
            return "error!";
    }
}

int main() {
    int m1, d1, m2, d2;
    int diff;
    cin >> m1 >> d1 >> m2 >> d2;

    diff = numOfDays(m2, d2) - numOfDays(m1, d1);
    cout << getDayOfWeek(diff) << endl;

    return 0;
}