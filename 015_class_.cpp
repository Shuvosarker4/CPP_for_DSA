#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int roll;
    int age;
    int marks;
    Person(string name, int roll, int age, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->age = age;
        this->marks = marks;
    }
    void hello()
    {
        cout << "Hello" << " " << name;
    }
};
int main()
{
    Person *shuvo = new Person("Shuvo", 37, 22, 70);

    cout << shuvo->name << " " << shuvo->roll;
    return 0;
}