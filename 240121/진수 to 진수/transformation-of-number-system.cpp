#define MAX_CNT 40
#include <iostream>
using namespace std;

int main() {
    string num;
    int input_base, output_base;
    int digits[MAX_CNT] = {0};
    int decimal = 0;
    int cnt = 0;
    cin >> input_base >> output_base;
    cin >> num;

    for(char n : num)
    {
        decimal = decimal * input_base + (n - '0');
    }

    while(true)
    {
        if(decimal < output_base)
        {
            digits[cnt++] = decimal;
            break;
        }

        digits[cnt++] = decimal % output_base;
        decimal /= output_base;
    }

    for(int i = (cnt-1); i >= 0; i--)
    {
        cout << digits[i];
    }
    cout << endl;

    return 0;
}