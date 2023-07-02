#include <bits/stdc++.h>
using namespace std;

int n, k, u;
vector<set<int>> ke;
vector<bool> vs;
int a[1001][1001];

void dfs(int j)
{
    vs[j] = true;
    for (auto i : ke[j])
    {
        if (!vs[i])
            dfs(i);
    }
}

int check()
{
    dfs(1);
    int min_deg = k;
    int v;
    int ok = 2;
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
            return 0;
    }
    int tp = 0;
    for (v = 1; v <= n; v++)
    {
        int deg = 0;
        for (int j = 1; j <= n; j++)
        {
            if (a[v][j] == 1)
                deg++;
        }
        if (deg % 2 == 1)
            tp++;
        if (tp > 2)
            return 0;
        if (tp == 1)
        {
            if (min_deg > deg)
            {
                min_deg = deg;
                u = v;
            }
        }
    }
    if (tp == 2)
        return 1;
    return 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ke.clear();
        ke.resize(n + 1);
        vs.clear();
        vs.resize(n + 1, false);
        for (int i = 0; i < 1001; i++)
        {
            for (int j = 0; j < 1001; j++)
            {
                a[i][j] = 0;
            }
        }
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].insert(y);
            ke[y].insert(x);
            a[x][y] = 1;
            a[y][x] = 1;
        }
        cout << check() << endl;
    }
}