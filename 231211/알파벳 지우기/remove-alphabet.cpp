#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str1, str2;
    string num1 = "", num2 = "";
    cin >> str1 >> str2;

    for(char ch : str1)
    {
        if(isdigit(ch))
            num1 += ch;
    }

    for(char ch : str2)
    {
        if(isdigit(ch))
            num2 += ch;
    }

    cout << stoi(num1) + stoi(num2) << endl;
    return 0;
}