#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    // int arr[5]; // when it return everything will be dismissed from memory
    int *arr = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    return arr;
};
int main()
{
    int *ar = fun();
    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " " << endl;
    }

    return 0;
}