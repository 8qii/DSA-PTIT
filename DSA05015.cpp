#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9;

void haq()
{
    int n, k;
    cin >> n >> k;
    if (k > n)
    {
        cout << 0;
        return;
    }
    long long res = 1;
    for (int i = n - k + 1; i <= n; i++)
    {
        res *= i;
        res %= mod;
    }
    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        haq();
    }
}