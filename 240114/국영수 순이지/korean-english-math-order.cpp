#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>
using namespace std;

class Student
{
    public:
        string name;
        int kor;
        int eng;
        int math;

        Student() {}

        Student(string name, int kor, int eng, int math)
        {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
};

bool cmp(const Student& s1, const Student& s2)
{
    return make_tuple(s1.kor, s1.eng, s1.math) > make_tuple(s2.kor, s2.eng, s2.math);
}

int main() {
    int n;
    cin >> n;
    Student student[10];

    for(int i=0; i<n; i++)
    {
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        student[i] = Student(name, kor, eng, math);
    }
    sort(student, student+n, cmp);
    
    for(int i=0; i<n; i++)
    {
        cout << student[i].name << " " << student[i].kor << " " << student[i].eng << " " << student[i].math << endl;
    }

    return 0;
}