#include <iostream>
#include <string>
using namespace std;

int main() {
    string strA, strB;
    int cnt = 0;
    cin >> strA >> strB;

    if(strA.length() != strB.length())
        cnt = -1;
    else
    {
        while(strA != strB)
        {
            if(cnt == strA.length())
            {
                cnt = -1;
                break;
            }

            strA = strA[strA.length() - 1] + strA.substr(0, strA.length()-1);
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}