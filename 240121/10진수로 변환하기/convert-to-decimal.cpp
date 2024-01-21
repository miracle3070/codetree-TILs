#include <iostream>
using namespace std;

int main() {
    string binary_str;
    int num = 0;
    cin >> binary_str;

    for(char b : binary_str)
    {
        num = num * 2 + (b - '0');
    }

    cout << num;
    return 0;
}