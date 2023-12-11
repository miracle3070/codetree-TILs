#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    for(int i=0; i<10; i++)
    {
        cin >> str;
        if(str == "END")
            break;
        
        reverse(str.begin(), str.end());
        cout << str << endl;
    }

    return 0;
}