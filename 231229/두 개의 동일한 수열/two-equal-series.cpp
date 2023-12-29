#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int arrA[100];
    int arrB[100];
    bool isEqual = true;

    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arrA[i];
    
    for(int i=0; i<n; i++)
        cin >> arrB[i];
    
    sort(arrA, arrA+n);
    sort(arrB, arrB+n);

    for(int i=0; i<n; i++)
    {
        if(arrA[i] != arrB[i])
        {
            isEqual = false;
            break;
        }
    }

    if(isEqual)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}