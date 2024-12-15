#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e;
    while (cin >> a >> b >> c >> d >> e)
    {
        // cout << min(a, b) << endl;
        // cout << max(a, b) << endl;
        cout << max({a, b, c, d, e}) << endl;
    }
    return 0;
}