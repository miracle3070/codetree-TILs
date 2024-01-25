#include <iostream>
using namespace std;

int main() {
    int map[2001][2001] = {0};
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1000;
    y2 += 1000;

    for(int x=x1; x<x2; x++)
    {
        for(int y=y1; y<y2; y++)
        {
            map[x][y] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1000;
    y2 += 1000;

    int area2 = 0;
    for(int x=x1; x<x2; x++)
    {
        for(int y=y1; y<y2; y++)
        {
            map[x][y] = 1;
        }
    }

    cin >> x1 >> y1 >> x2 >> y2;
    x1 += 1000;
    y1 += 1000;
    x2 += 1000;
    y2 += 1000;

    for(int x=x1; x<x2; x++)
    {
        for(int y=y1; y<y2; y++)
        {
            map[x][y] = 2;
        }
    }

    int answer = 0;
    for(int x=0; x<=2000; x++)
    {
        for(int y=0; y<=2000; y++)
        {
            if(map[x][y] == 1)
                answer++;
        }
    }

    cout << answer << endl;
    return 0;
}