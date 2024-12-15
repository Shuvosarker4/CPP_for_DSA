#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for (char c : s)
    {
        frq[c - 'a']++;
        // cout << c - 'a' << " ";
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; j < frq[i - 'a']; i++)
        {
            cout << i << " "; // For i = 'a', frq[0] = 2, so 'a' is printed twice.
                              // For i = 'b', frq[1] = 2, so 'b' is printed twice.
                              // For i = 'c', frq[2] = 1, so 'c' is printed once.
        }
    }
    return 0;
}