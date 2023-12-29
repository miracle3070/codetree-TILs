#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arr[2000];
    int result = -1;

    cin >> n;
    for(int i=0; i<n*2; i++)
        cin >> arr[i];

    sort(arr, arr+(n*2));

    for(int i=0; i<n; i++)
    {
        int sum = arr[i] + arr[(n*2)-i-1];
        if(result < sum)
            result = sum;
    }

    cout << result;
    return 0;
}