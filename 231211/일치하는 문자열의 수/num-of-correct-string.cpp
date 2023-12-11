#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, cnt = 0;
    string target;
    cin >> n >> target;

    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;

        if(str == target)
            cnt++;
    }

    cout << cnt << endl;
    return 0;
}