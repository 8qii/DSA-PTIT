#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int maxx = 0;
        int a, b, c;
        cin >> a >> b >> c;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int dp[a + 1][b + 1][c + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                for (int h = 1; h <= c; h++)
                {
                    if (s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[h - 1])
                        dp[i][j][h] = dp[i - 1][j - 1][h - 1] + 1;
                    else
                        dp[i][j][h] = max({dp[i - 1][j][h], dp[i][j - 1][h], dp[i][j][h - 1]});
                    maxx = max(maxx, dp[i][j][h]);
                }
            }
        }
        cout << maxx << endl;
    }
}