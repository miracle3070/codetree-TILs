#include <iostream>
using namespace std;

int main() {
    int n, base;
    int cnt = 0;
    int digits[10] = {0};
    cin >> n >> base;

    while(true)
    {
        if(n < base)
        {
            digits[cnt++] = n;
            break;
        }

        digits[cnt++] = n % base;
        n /= base;
    }

    for(int i = cnt-1; i >= 0; i--)
        cout << digits[i];
    cout << endl;

    return 0;
}