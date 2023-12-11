#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    ch = (char)((ch - 'a' + 1) % 26 + 'a');
    cout << ch << endl;

    return 0;
}