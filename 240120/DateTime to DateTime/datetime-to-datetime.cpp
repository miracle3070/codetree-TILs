#include <iostream>
using namespace std;

int numOfMinutes(int days, int hour, int min)
{
    return (days * 24 * 60) + (hour * 60) + min;
}

int main() {
    int days, hour, min;
    int diff;
    cin >> days >> hour >> min;

    diff = numOfMinutes(days, hour, min) - numOfMinutes(11, 11, 11);
    if(diff >= 0)
        cout << diff << endl;
    else
        cout << -1 << endl;

    return 0;
}