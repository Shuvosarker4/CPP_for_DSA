#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int marks;
    int cls;
    Student(int roll, int marks, int cls)
    {
        this->roll = roll;
        this->marks = marks;
        this->cls = cls;
    }
};
int main()
{
    Student *shuvo = new Student(37, 80, 11);

    cout << shuvo->roll; // dereference
    return 0;
}