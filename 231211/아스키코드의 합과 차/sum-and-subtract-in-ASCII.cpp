#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch1, ch2;
    cin >> ch1 >> ch2;

    int max = (ch1 > ch2) ? (int)ch1 : (int)ch2;
    int min = (ch1 < ch2) ? (int)ch1 : (int)ch2;

    cout << (max + min) << " " << (max - min) << endl;
    return 0;
}