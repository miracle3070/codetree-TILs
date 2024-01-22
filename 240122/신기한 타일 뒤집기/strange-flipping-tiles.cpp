#include <iostream>
using namespace std;

enum Color
{
    GRAY = 0,
    WHITE,
    BLACK
};

int cur_position = 100'000;

void MoveLeft(int map[], int move_cnt)
{
    for(int i=cur_position; i > (cur_position - move_cnt); i--)
    {
        map[i] = WHITE;
    }
    cur_position = cur_position - move_cnt + 1;
}

void MoveRight(int map[], int move_cnt)
{
    for(int i=cur_position; i < (cur_position + move_cnt); i++)
    {
        map[i] = BLACK;
    }
    cur_position = cur_position + move_cnt - 1;
}

int main() {
    int n;
    int map[200'001] = {0};
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int move_cnt;
        char move_dir;
        cin >> move_cnt >> move_dir;

        if(move_dir == 'L')
            MoveLeft(map, move_cnt);
        else
            MoveRight(map, move_cnt);
    }

    int num_of_white = 0, num_of_black = 0;
    
    for(int i=1; i<=200'000; i++)
    {
        if(map[i] == WHITE)
            num_of_white++;
        else if(map[i] == BLACK)
            num_of_black++;
        else
            continue;
    }

    cout << num_of_white << " " << num_of_black << endl;
    return 0;
}