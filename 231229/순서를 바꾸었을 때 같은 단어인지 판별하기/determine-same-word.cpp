#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string strA, strB;
    cin >> strA >> strB;

    sort(strA.begin(), strA.end());
    sort(strB.begin(), strB.end());

    if(strA == strB)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}