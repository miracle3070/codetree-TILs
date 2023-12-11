#include <iostream>
#include <string>
using namespace std;

int main() {
    int answer = 0;
    string str;
    cin >> str;

    for(char ch : str)
    {
        answer += ch - '0';
    }

    cout << answer << endl;
    return 0;
}