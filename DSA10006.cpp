#include <bits/stdc++.h>
using namespace std;

int n, k, u;
vector<vector<int>> ke;
vector<int> vs;
vector<int> e;
vector<pair<int, int>> w;

void dfs(int j)
{
    vs[j] = true;
    for (auto i : ke[j])
    {
        if (!vs[i])
        {
            w.push_back({j, i});
            dfs(i);
        }
    }
}

void tree_dfs()
{
    dfs(u);
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    for (int i = 0; i < w.size(); i++)
    {
        cout << w[i].first << " " << w[i].second << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> u;
        ke.clear();
        ke.resize(n + 10);
        vs.clear();
        vs.resize(n + 10, false);
        e.clear();
        e.resize(n + 10);
        w.clear();
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        tree_dfs();
    }
}