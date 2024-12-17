#include <bits/stdc++.h>
namespace Shuvo
{
    int age = 24;
    void hello()
    {
        // cout << "Hello Shuvo from namespace";
    }
}

using namespace std;
using namespace Shuvo;
int main()
{
    cout << age << endl;
    return 0;
}