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
        long long f[n + 10][n + 10];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    f[i][j] = 1;
                }
                else if (j == 1 || j == i - 1)
                {
                    f[i][j] = i;
                }
                else
                    f[i][j] = f[i - 1][j - 1] + f[i - 1][j];
                f[i][j] %= mod;
            }
        }
        cout << f[n][k] << endl;
    }
}