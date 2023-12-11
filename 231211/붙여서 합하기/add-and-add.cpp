#include <iostream>
#include <string>
using namespace std;

int main() {
    int answer;
    string n1, n2;
    cin >> n1 >> n2;

    answer = stoi(n1 + n2) + stoi(n2 + n1);
    cout << answer << endl;
    return 0;
}