#include <bits/stdc++.h>
using namespace std;

void hqi()
{
    int n, k;
    cin >> k >> n;
    int o = n;
    int a[k + 1] = {};
    if (n > k * 9 || n == 0)
    {
        cout << "-1 -1";
        return;
    }
    a[1] = 1;
    n--;
    for (int i = k; i >= 2; i--)
    {
        if (n >= 10)
            a[i] = 9;
        else
            a[i] = n;
        n -= a[i];
    }
    a[1] = 1 + n;
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
    for (int i = 1; i <= k; i++)
    {
        if (o >= 10)
            a[i] = 9;
        else
            a[i] = o;
        o -= a[i];
    }
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
}

int main()
{
    int t;
    t = 1;
    while (t--)
    {
        hqi();
        cout << endl;
    }
}