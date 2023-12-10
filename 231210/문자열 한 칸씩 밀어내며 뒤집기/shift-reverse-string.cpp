#include <iostream>
#include <string>
using namespace std;

void moveForward(string &str)
{
    if(str.length() == 1)
        return;
    
    str = str.substr(1) + str[0];
}

void moveBackward(string &str)
{
    if(str.length() == 1)
        return;

    int length = str.length();
    str = str[length-1] + str.substr(0, length-1);
}

void reverse(string &str)
{
    string temp = "";
    int length = str.length();

    for(int i=length-1; i>=0; i--)
    {
        temp += str[i];
    }

    str = temp;
}

int main() {
    int q;
    string str;
    cin >> str >> q;

    for(int i=0; i<q; i++)
    {
        int command;
        cin >> command;

        switch(command)
        {
        case 1:
            moveForward(str);
            break;
        case 2:
            moveBackward(str);
            break;
        case 3:
            reverse(str);
            break;
        default:
            break;
        }
        cout << str << endl;
    }

    return 0;
}