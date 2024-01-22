#include <iostream>
using namespace std;

enum Color
{
    NO_COLOR,
    WHITE,
    BLACK,
    GRAY
};

class Tile
{
    public:
        int current_color;
        int white_cnt;
        int black_cnt;

        Tile()
        {
            this->current_color = NO_COLOR;
            this->white_cnt = 0;
            this->black_cnt = 0;
        }
};

int cur_position = 100'000;

void MoveLeft(Tile map[], int move_cnt)
{
    for(int i=cur_position; i > (cur_position - move_cnt); i--)
    {
        if(map[i].current_color == GRAY)
            continue;
        
        map[i].white_cnt++;

        if(map[i].white_cnt >= 2 && map[i].black_cnt >= 2)
            map[i].current_color = GRAY;
        else
            map[i].current_color = WHITE;
    }
    cur_position = cur_position - move_cnt + 1;
}

void MoveRight(Tile map[], int move_cnt)
{
    for(int i=cur_position; i < (cur_position + move_cnt); i++)
    {
        if(map[i].current_color == GRAY)
            continue;
        
        map[i].black_cnt++;

        if(map[i].white_cnt >= 2 && map[i].black_cnt >= 2)
            map[i].current_color = GRAY;
        else
            map[i].current_color = BLACK;
    }
    cur_position = cur_position + move_cnt - 1;
}

int main() {
    int n;
    Tile map[200'001];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int move_cnt;
        char move_dir;
        cin >> move_cnt >> move_dir;

        if(move_dir == 'L')
        {
            MoveLeft(map, move_cnt);
        }
        else
        {
            MoveRight(map, move_cnt);
        }
    }

    int num_of_white = 0, num_of_black = 0, num_of_gray = 0;
    for(int i=1; i<200'000; i++)
    {
        if(map[i].current_color == WHITE)
            num_of_white++;
        else if(map[i].current_color == BLACK)
            num_of_black++;
        else if(map[i].current_color == GRAY)
            num_of_gray++;
        else
            continue;
    }

    cout << num_of_white << " " << num_of_black << " " << num_of_gray << endl;
    return 0;
}