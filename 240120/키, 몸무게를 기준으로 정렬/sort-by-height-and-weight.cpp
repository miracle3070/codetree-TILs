#include <iostream>
#include <string>
#include <algorithm>
#include <tuple>
using namespace std;

int main() {
    int n;
    tuple<int, int, string> persons[10];
    cin >> n;

    for(int i=0; i<n; i++)
    {
        string name;
        int height, weight;
        cin >> name >> height >> weight;
        persons[i] = make_tuple(height, -weight, name);
    }

    sort(persons, persons+n);
    
    for(int i=0; i<n; i++)
    {
        string name;
        int height, weight;
        tie(height, weight, name) = persons[i];
        cout << name << " " << height << " " << -weight << endl;
    }
    return 0;
}