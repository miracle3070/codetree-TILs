#include <iostream>
using namespace std;

int cur_pos = 1000;

void MoveLeft(int map[], int cnt)
{
    for(int i = (cur_pos-1); i >= (cur_pos-cnt); i--)
    {
        map[i]++;
    }
    cur_pos -= cnt;
}

void MoveRight(int map[], int cnt)
{
    for(int i = cur_pos; i < (cur_pos+cnt); i++)
    {
        map[i]++;
    }
    cur_pos += cnt;
}

int GetAnswer(int map[])
{
    int total = 0;
    for(int i=0; i<=2000; i++)
    {
        if(map[i] >=2 )
            total++;
    }
    return total;
}

int main() {
    int map[2001] = {0};
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int move_cnt;
        char move_dir;
        cin >> move_cnt >> move_dir;

        if(move_dir == 'L')
            MoveLeft(map, move_cnt);
        else if (move_dir = 'R')
            MoveRight(map, move_cnt);
    }

    cout << GetAnswer(map) << endl;
    return 0;
}