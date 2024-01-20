#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int num_position[1000];
    pair<int, int> numbers[1000];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        numbers[i] = make_pair(num, i);
    }

    sort(numbers, numbers+n);

    for(int i=0; i<n; i++)
    {
        num_position[numbers[i].second] = (i+1);
    }

    for(int i=0; i<n; i++)
    {
        cout << num_position[i] << " ";
    }

    return 0;
}