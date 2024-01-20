#include <iostream>
using namespace std;

int numOfDays(int month, int days)
{
    int daysOfMonth[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalDays = 0;

    for(int i=1; i<month; i++)
    {
        totalDays += daysOfMonth[i];
    }
    totalDays += days;
    return totalDays;
}

int getDayOfWeek(string str)
{
    if(str == "Mon")
        return 0;
    else if(str == "Tue")
        return 1;
    else if(str == "Wed")
        return 2;
    else if(str == "Thu")
        return 3;
    else if(str == "Fri")
        return 4;
    else if(str == "Sat")
        return 5;
    else if(str == "Sun")
        return 6;
    else
        return -1;
}

int getDayOfWeekCnt(int days, int dayOfWeek)
{
    int cnt = days / 7;
    int remain = days % 7;

    if(remain >= dayOfWeek)
        cnt++;
    
    return cnt;
}

int main() {
    string dayOfWeekStr;
    int m1, d1, m2, d2;
    int diff;
    int dayOfWeek;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> dayOfWeekStr;

    diff = numOfDays(m2, d2) - numOfDays(m1, d1);
    dayOfWeek = getDayOfWeek(dayOfWeekStr);
    
    cout << getDayOfWeekCnt(diff, dayOfWeek) << endl;
    return 0;
}