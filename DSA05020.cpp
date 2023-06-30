#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int a[m + 10][n + 10];
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (i == 1 && j == 1)
                    continue;
                else if (i == 1)
                    a[i][j] += a[i][j - 1];
                else if (j == 1)
                    a[i][j] += a[i - 1][j];
                else
                    a[i][j] += min({a[i - 1][j - 1], a[i - 1][j], a[i][j - 1]});
            }
        }
        cout << a[m][n] << endl;
    }
}