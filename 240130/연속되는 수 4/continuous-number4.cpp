#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;
    int max_cnt = 1;
    for(int i=0; i<n; i++)
    {
        if(i == 0 || arr[i] <= arr[i-1])
        {
            cnt = 1;
        }
        else
        {
            cnt++;
            max_cnt = max(max_cnt, cnt);
        }
    }

    cout << max_cnt << endl;
    return 0;
}