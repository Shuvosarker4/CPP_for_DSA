#include <bits/stdc++.h>
using namespace std;
void print(string &s) // use & for references
{
    s = "world";
};
int main()
{
    string s = "Hello";
    print(s);
    cout << s;
    return 0;
}