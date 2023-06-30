#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n + 1];
        int dp[n + 1][k + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 1;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (dp[i - 1][j] == 1)
                    dp[i][j] = 1;
                if (j - a[i] >= 0)
                    if (dp[i - 1][j - a[i]])
                        dp[i][j] = 1;
            }
        }
        if (dp[n][k])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}