#include <iostream>
using namespace std;

int main() {
    int arr[1000];
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int max_cnt = 1;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        if(i == 0 || arr[i] != arr[i-1])
        {
            cnt = 1;
        }
        else
        {
            cnt++;
            max_cnt = (max_cnt < cnt) ? cnt : max_cnt;
        }
    }

    cout << max_cnt << endl;
    return 0;
}