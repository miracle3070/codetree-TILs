#include <iostream>
#include <string>
using namespace std;

class Secret
{
public:
    string secretCode;
    char meetingPoint;
    int time;

    Secret(string secretCode, char meetingPoint, int time)
    {
        this->secretCode = secretCode;
        this->meetingPoint = meetingPoint;
        this->time = time;
    }
};

int main() {
    string secretCode;
    char meetingPoint;
    int time;

    cin >> secretCode >> meetingPoint >> time;
    Secret s(secretCode, meetingPoint, time);

    cout << "secret code : " << s.secretCode << endl;
    cout << "meeting point : " << s.meetingPoint << endl;
    cout << "time : " << s.time << endl;
    return 0;
}