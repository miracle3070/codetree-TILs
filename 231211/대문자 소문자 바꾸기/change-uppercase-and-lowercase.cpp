#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(char ch : str)
    {
        if(ch >= 'A' && ch <= 'Z')
            cout << (char)tolower(ch);
        else if(ch >= 'a' && ch <= 'z')
            cout << (char)toupper(ch);
        else
            cout << ch;
    }

    return 0;
}