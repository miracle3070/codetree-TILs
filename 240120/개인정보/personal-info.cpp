#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Person
{
    public:
        string name;
        int height;
        double weight;

        Person() {}

        Person(string name, int height, double weight)
        {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool cmpName(const Person& a, const Person& b)
{
    return a.name < b.name;
}

bool cmpHeight(const Person& a, const Person& b)
{
    return a.height > b.height;
}

int main() {
    Person persons[5];
    for(int i=0; i<5; i++)
    {
        string name;
        int height;
        double weight;
        cin >> name >> height >> weight;
        persons[i] = Person(name, height, weight);
    }

    cout << "name" << endl;
    sort(persons, persons+5, cmpName);
    for(Person person : persons)
    {
        cout << person.name << " " << person.height << " " << person.weight << endl;
    }

    cout << endl;

    cout << "height" << endl;
    sort(persons, persons+5, cmpHeight);
    for(Person person : persons)
    {
        cout << person.name << " " << person.height << " " << person.weight << endl;
    }

    return 0;
}