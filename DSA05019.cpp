#include <bits/stdc++.h>
using namespace std;

int a[1000][1000];
int f[1000][1000];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        memset(a, 0, sizeof(a));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        int maxi = 0;
        memset(f, 0, sizeof(f));
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == 0)
                    f[i][j] = 0;
                else
                {
                    int u = 1;
                    int l = 1;
                    while (i - u >= 1 && a[i - u][j] == 1)
                        u++;
                    while (j - l >= 1 && a[i][j - l] == 1)
                        l++;
                    f[i][j] = min(u, l);
                }
            }
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                f[i][j] = min(f[i - 1][j - 1] + 1, f[i][j]);
                maxi = max(maxi, f[i][j]);
            }
        }
        cout << maxi << endl;
    }
}