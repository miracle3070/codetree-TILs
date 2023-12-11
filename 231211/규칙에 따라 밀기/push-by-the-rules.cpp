#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, command;
    cin >> str >> command;

    for(char cmd : command)
    {
        if(cmd == 'L')
            str = str.substr(1) + str[0];
        else if (cmd == 'R')
            str = str[str.length()-1] + str.substr(0, str.length()-1);
    }

    cout << str << endl;
    return 0;
}