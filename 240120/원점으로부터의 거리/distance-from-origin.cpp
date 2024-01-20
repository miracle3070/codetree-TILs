#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

class Position
{
    public:
        int xpos;
        int ypos;
        int dist;
        int num;

        Position() {}

        Position(int xpos, int ypos, int num)
        {
            this->xpos = xpos;
            this->ypos = ypos;
            this->num = num;
            this->dist = (int)(abs(xpos) + abs(ypos));
        }
};

bool cmp(const Position& a, const Position& b)
{
    if(a.dist != b.dist)
        return a.dist < b.dist;
    else
        return a.num < b.num;
}

int main() {
    int n;
    Position position[1000];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int xpos, ypos;
        cin >> xpos >> ypos;
        position[i] = Position(xpos, ypos, (i+1));
    }

    sort(position, position+n, cmp);
    
    for(int i=0; i<n; i++)
    {
        cout << position[i].num << endl;
    }
    return 0;
}