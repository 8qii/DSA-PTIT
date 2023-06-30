#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> k >> n;
    int w[n + 1], val[n + 1];
    int dp[n + 1][k + 1] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
        val[i] = w[i];
    }

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (j < w[i - 1])
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i - 1]] + val[i - 1]);
        }
    }
    cout << dp[n][k] << endl;
}