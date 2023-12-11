#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, total = 0;
    string answer;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        total += num;
    }

    answer = to_string(total);
    answer = answer.substr(1) + answer[0];

    cout << answer << endl;
    return 0;
}