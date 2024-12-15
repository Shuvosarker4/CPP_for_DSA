#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string s;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;

    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, a[i].s);
        cin >> a[i].roll >> a[i].marks;
    }
    // sort using selection sort (1st obj compare to 2,3,4 obj)
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i].marks < a[j].marks)
            {
                swap(a[i], a[j]); // swap using highest marks
            }

            if (a[i].marks == a[j].marks)
            {
                if (a[i].roll > a[j].roll)
                {
                    swap(a[i], a[j]); // if both marks are equal then swap using roll
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].s << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}