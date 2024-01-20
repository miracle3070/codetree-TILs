#include <iostream>
using namespace std;

int main() {
    int hour_a, hour_b,  minute_a, minute_b;
    int total_a, total_b;
    cin >> hour_a >> minute_a >> hour_b >> minute_b;
    
    total_a = hour_a * 60 + minute_a;
    total_b = hour_b * 60 + minute_b;

    cout << total_b - total_a << endl;
    return 0;
}