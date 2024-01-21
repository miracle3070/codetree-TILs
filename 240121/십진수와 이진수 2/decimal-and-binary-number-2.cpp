#include <iostream>
using namespace std;

int main() {
    string binary;
    int decimal = 0;
    int digits[20] = {0};
    int cnt = 0;
    cin >> binary;

    for(char b : binary)
    {
        decimal = decimal * 2 + (b - '0');
    }
    decimal *= 17;

    while(true)
    {
        if(decimal < 2)
        {
            digits[cnt++] = decimal;
            break;
        }

        digits[cnt++] = decimal % 2;
        decimal /= 2;
    }

    for(int i = (cnt-1); i >= 0; i--)
    {
        cout << digits[i];
    }
    cout << endl;
    return 0;
}