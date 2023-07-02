#include <bits/stdc++.h>
using namespace std;

int n, k, u;
vector<vector<int>> ke;
vector<int> vs;
vector<int> e;
vector<pair<int, int>> w;

void bfs(int j)
{
    queue<int> q;
    q.push(u);
    vs[u] = true;
    while (!q.empty())
    {
        int tmp = q.front();
        q.pop();
        for (auto i : ke[tmp])
        {
            if (!vs[i])
            {
                q.push(i);
                w.push_back({tmp, i});
                vs[i] = true;
            }
        }
    }
}

void tree_dfs()
{
    bfs(u);
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