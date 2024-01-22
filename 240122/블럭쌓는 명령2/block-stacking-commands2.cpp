#include <iostream>
using namespace std;

int main() {
    int map[101] = {0};
    int map_size, command_cnt;
    int max_cnt = -1;
    cin >> map_size >> command_cnt;

    for(int i=0; i<command_cnt; i++)
    {
        int start, end;
        cin >> start >> end;
        for(int i=start; i<=end; i++)
        {
            map[i]++;
        }
    }

    for(int i=1; i<=map_size; i++)
    {
        if(max_cnt < map[i])
        {
            max_cnt = map[i];
        }
    }

    cout << max_cnt << endl;
    return 0;
}