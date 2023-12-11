#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int answer = 0;
    string str;
    cin >> str;

    for(char ch : str)
    {
        if(isdigit(ch))
            answer += (int)(ch - '0');
    }
    
    cout << answer << endl;
    return 0;
}