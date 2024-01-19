#include <iostream>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    int n;
    tuple<int, int, int> students[1000];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int h, w;
        cin >> h >> w;
        students[i] = make_tuple(-h, -w, (i+1));
    }

    sort(students, students+n);
    for(int i=0; i<n; i++)
    {
        int h, w, n;
        tie(h, w, n) = students[i];
        cout << -h << " " << -w << " " << n << endl;
    }

    return 0;
}