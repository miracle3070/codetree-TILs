#include <iostream>
using namespace std;

int main() {
    int map[201] = {0};
    int max_cnt = -1;
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int start, end;
        cin >> start >> end;
        start += 100;
        end += 100;
        for(int k=start; k<end; k++)
        {
            map[k]++;
        }
    }

    for(int i=0; i<=200; i++)
    {
        if(max_cnt < map[i])
            max_cnt = map[i];
    }

    cout << max_cnt << endl;
    return 0;
}