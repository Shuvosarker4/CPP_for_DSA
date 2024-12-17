#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    getchar();
    string s;
    getline(cin, s);

    int dig, sum = 0;
    while (n > 0)
    {
        dig = n % 10;
        sum += dig;
        n = n / 10;
    }
    // cout << sum;
    if (s.size() > sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}