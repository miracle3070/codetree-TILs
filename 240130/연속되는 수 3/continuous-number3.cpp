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
        if(i == 0)
        {
            cnt = 1;
            continue;
        }

        if(arr[i] > 0)
        {
            if(arr[i-1] > 0)
            {
                cnt++;
                max_cnt = (max_cnt < cnt) ? cnt : max_cnt;
            }
            else
            {
                cnt = 1;
            }
        }
        else
        {
            if(arr[i-1] < 0)
            {
                cnt++;
                max_cnt = (max_cnt < cnt) ? cnt : max_cnt;
            }
            else
            {
                cnt = 1;
            }
        }
    }

    cout << max_cnt << endl;
    return 0;
}