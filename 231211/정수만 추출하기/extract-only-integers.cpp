#include <iostream>
#include <string>
using namespace std;

int main() {
    int answer = 0;
    string s1, s2;
    cin >> s1 >> s2;

    for(int i=0; i<s1.length(); i++)
    {
        if(!isdigit(s1[i]))
        {
            answer += stoi(s1.substr(0, i));
            break;
        }
    }

    for(int i=0; i<s2.length(); i++)
    {
        if(!isdigit(s2[i]))
        {
            answer += stoi(s2.substr(0, i));
            break;
        }
    }

    cout << answer << endl;
    return 0;
}