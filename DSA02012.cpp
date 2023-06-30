#include <bits/stdc++.h>
using namespace std;

int n, m, ans;
int a[105][105];
bool vs[105][105];

void solve(int i, int j)
{
    if (i == n && j == m)
    {
        ans++;
        return;
    }
    if (i + 1 <= n)
        solve(i + 1, j);
    if (j + 1 <= m)
        solve(i, j + 1);
}

void haq()
{
    ans = 0;
    cin >> n >> m;
    memset(vs, false, sizeof(vs));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> a[i][j];
        }
    }
    solve(1, 1);
    cout << ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        haq();
        cout << endl;
    }
}