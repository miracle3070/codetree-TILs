#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    int arr[1000];
    
    cin >> n >> t;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int length = 0;
    int max_length = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] > t)
        {
            length++;
            max_length = max(max_length, length);
        }
        else
        {
            length = 0;
        }
    }

    cout << max_length << endl;
    return 0;
}