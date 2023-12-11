#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    string sub1="", sub2="";
    cin >> s1 >> s2;

    for(int i=0; i<s1.length(); i++)
    {
        if(isdigit(s1[i]))
            sub1 += s1[i];
        else
            break;
    }

    for(int i=0; i<s2.length(); i++)
    {
        if(isdigit(s2[i]))
            sub2 += s2[i];
        else
            break;
    }

    cout << stoi(sub1) + stoi(sub2) << endl;
    return 0;
}