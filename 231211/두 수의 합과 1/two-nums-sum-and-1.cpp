#include <iostream>
#include <string>
using namespace std;

int main() {
    int s1, s2;
    int sum = 0;
    string str = "";
    int answer = 0;
    cin >> s1 >> s2;

    str = to_string(s1 + s2);
    for(char ch : str)
    {
        if(ch == '1')
            answer++;
    }

    cout << answer << endl;
    return 0;
}