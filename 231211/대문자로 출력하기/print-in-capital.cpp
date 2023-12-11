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
            cout << (char)toupper(ch);
    }
    return 0;
}