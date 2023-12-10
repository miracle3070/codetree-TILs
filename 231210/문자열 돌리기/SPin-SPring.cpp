#include <iostream>
#include <string>
using namespace std;

int main() {
    int length;
    string str;
    
    cin >> str;
    length = str.length();

    cout << str << endl;
    for(int i=0; i < length; i++)
    {
        str = str.substr(length-1, 1) + str.substr(0, length-1);
        cout << str << endl;
    }

    return 0;
}