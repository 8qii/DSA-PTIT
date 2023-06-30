#include <bits/stdc++.h>
using namespace std;

void hqi()
{
    int n, k;
    cin >> n >> k;
    int a[k + 1] = {};
    if (n > k * 9)
    {
        cout << -1;
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
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        hqi();
        cout << endl;
    }
}