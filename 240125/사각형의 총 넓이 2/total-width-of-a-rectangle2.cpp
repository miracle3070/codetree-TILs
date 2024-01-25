#include <iostream>
using namespace std;

int main() {
    int n;
    int map[201][201] = {0};
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 100;
        y1 += 100;
        
        x2 += 100;
        y2 += 100;

        for(int x=x1; x<x2; x++)
        {
            for(int y=y1; y<y2; y++)
            {
                map[x][y] = 1;
            }
        }
    }

    int answer = 0;
    for(int x = 0; x <= 200; x++)
    {
        for(int y = 0; y <= 200; y++)
        {
            if(map[x][y] == 1)
                answer++;
        }
    }

    cout << answer << endl;
    return 0;
}