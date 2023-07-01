#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100001];
    int b[100001];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int dp[100001];
    memset(dp, 1, sizeof(dp));
    int maxx = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] < a[i] && b[j] < b[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
                maxx = max(maxx, dp[i]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << dp[i] << " ";
    }
}