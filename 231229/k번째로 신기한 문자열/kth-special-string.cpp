#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool startsWith(string str, string target)
{
    int strLength = str.length();
    int targetLength = target.length();

    if (strLength < targetLength)
        return false;

    for (int i = 0; i < targetLength; i++) {
        if (str[i] != target[i])
            return false;
    }

    return true;
}

int main() {
    int n, k;
    int length = 0;
    string arr[100];

    string T;
    cin >> n >> k >> T;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        if (startsWith(str, T))
            arr[length++] = str;
    }

    sort(arr, arr + length);
    cout << arr[k - 1];
    return 0;
}