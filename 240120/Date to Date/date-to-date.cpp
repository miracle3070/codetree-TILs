#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int startDays = 0, endDays = 0;
    cin >> m1 >> d1 >> m2 >> d2;

    for(int i=1; i<m1; i++)
    {
        startDays += days[i];
    }
    startDays += d1;

    for(int i=0; i<m2; i++)
    {
        endDays += days[i];
    }
    endDays += d2;

    cout << (endDays - startDays) + 1 << endl;
    return 0;
}