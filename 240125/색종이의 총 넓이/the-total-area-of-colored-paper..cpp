#include <iostream>
using namespace std;

int main() {
    int n;
    int map[201][201] = {0};
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;

        x += 100;
        y += 100;

        for(int r=x; r<(x+8); r++)
        {
            for(int c=y; c<(y+8); c++)
            {
                map[r][c] = 1;
            }
        }
    }

    int total_area = 0;
    for(int r = 0; r <= 200; r++)
    {
        for(int c = 0; c <= 200; c++)
        {
            if(map[r][c] == 1)
                total_area++;
        }
    }

    cout << total_area << endl;
    return 0;
}