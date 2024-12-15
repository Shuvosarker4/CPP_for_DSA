#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    *a = 100;
    return a;
};
int main()
{
    int *p = fun();

    cout << p << " " << *p << endl;

    // int *a = new int;
    // cin >> *a;
    // cout << *a << endl;
    return 0;
}