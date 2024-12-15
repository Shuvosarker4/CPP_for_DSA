#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int age;
    int marks;
    // Student(string name, int age, int marks)
    // {
    //     this->name = name;
    //     this->age = age;
    //     this->marks = marks;
    // }
};
int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].name);
        cin >> a[i].age >> a[i].marks;
    }

    Student mn;         // create object
    mn.marks = INT_MAX; // store max value in the marks of that obj

    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < mn.marks)
        {
            mn = a[i]; // take obj according to marks
        }
    }

    cout << mn.name << " " << mn.age << " " << mn.marks;

    return 0;
}