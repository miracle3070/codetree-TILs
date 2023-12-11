#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[201];
    int cnt = 0;

    for(int i=1; i<=200; i++)
    {
        cin >> str[i];
        if(str[i] == "0")
            break;
        cnt++;
    }

    cout << cnt << endl;
    for(int i=1; i<=cnt; i += 2)
    {
        cout << str[i] << endl;
    }
    return 0;
}