#include <iostream>
using namespace std;

void inputRectangle(int map[][2001], int x1, int y1, int x2, int y2, int n)
{
    x1 += 1000;
    y1 += 1000;

    x2 += 1000;
    y2 += 1000;

    for(int r=x1; r<x2; r++)
    {
        for(int c=y1; c<y2; c++)
        {
            map[r][c] = n;
        }
    }
}

int getAnswer(int map[][2001], int target)
{
    int min_x = (int)(1e9), max_x = -1;
    int min_y = (int)(1e9), max_y = -1;
    bool detected = false;

    for(int x=0; x <= 2000; x++)
    {
        for(int y=0; y <= 2000; y++)
        {
            if(map[x][y] == target)
            {
                detected = true;
                max_x = (max_x < x) ? x : max_x;
                min_x = (min_x > x) ? x : min_x;

                max_y = (max_y < y) ? y : max_y;
                min_y = (min_y > y) ? y : min_y;
            }
        }
    }

    if(detected == false)
        return 0;

    int diff_x = max_x - min_x + 1;
    int diff_y = max_y - min_y + 1;

    return diff_x * diff_y;
}

int main() {
    int map[2001][2001] = {0};
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    inputRectangle(map, x1, y1, x2, y2, 1);

    cin >> x1 >> y1 >> x2 >> y2;
    inputRectangle(map, x1, y1, x2, y2, 2);

    cout << getAnswer(map, 1);
    return 0;
}