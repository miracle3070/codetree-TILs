#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    cin >> str;

    for(char ch : str)
    {
        if(isalpha(ch))
            cout << (char)tolower(ch);
        else if(isdigit(ch))
            cout << (char)ch;
    }
    return 0;
}