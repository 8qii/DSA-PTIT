#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long f[100001] = {};
        long long tmp = 0;
        for (int i = 1; i <= k; i++)
        {
            f[i] = (tmp + 1) % mod;
            tmp = (tmp + f[i] ) % mod;
        }
        for (int i = k + 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                f[i] = (f[i] + f[i - j]) % mod;
            }
        }
        cout << f[n] << endl;
    }
}