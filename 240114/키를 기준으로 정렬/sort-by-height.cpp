#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person
{
    public:
        string name;
        int height;
        int weight;

        Person() {}

        Person(string name, int height, int weight)
        {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmp(const Person& p1, const Person& p2)
{
    return p1.height < p2.height;
}

int main() {
    int n;
    cin >> n;
    Person person[10];

    for(int i=0; i<n; i++)
    {
        cin >> person[i].name >> person[i].height >> person[i].weight;
    }

    sort(person, person + n, cmp);
    for(int i=0; i<n; i++)
    {
        cout << person[i].name << " " << person[i].height << " "<< person[i].weight << endl;
    }
    return 0;
}