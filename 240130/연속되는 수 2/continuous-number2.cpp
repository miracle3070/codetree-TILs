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

    int answer = 0;
    for(int i=0; i<n; i++)
    {
        if(i == 0 || arr[i] != arr[i-1])
            answer++;
    }

    cout << answer << endl;
    return 0;
}