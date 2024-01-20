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
    int idx = ((days % 7) + 7) % 7;
    string dayOfWeek[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    return dayOfWeek[idx];
}

int main() {
    int m1, d1, m2, d2;
    int diff;
    cin >> m1 >> d1 >> m2 >> d2;

    diff = numOfDays(m2, d2) - numOfDays(m1, d1);
    cout << getDayOfWeek(diff) << endl;

    return 0;
}