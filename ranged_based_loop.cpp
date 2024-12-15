#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    int cnt = 0;
    for (char word : s)
    {
        cnt++;
    }
    cout << cnt;
    return 0;
}