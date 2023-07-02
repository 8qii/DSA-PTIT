#include <bits/stdc++.h>
using namespace std;

int n, k, u;
vector<vector<pair<int, int>>> ke;
vector<bool> vs;
const int inf = 1e9;

void dijkstra(int s)
{
    vector<long long> d(n + 1, inf);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, s});
    while (!q.empty())
    {
        pair<int, int> top = q.top();
        q.pop();
        int u = top.second;
        int kc = top.first;
        if (kc > d[u])
            continue;
        for (auto it : ke[u])
        {
            int v = it.first;
            int w = it.second;
            if (d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                q.push({d[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << " ";
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
        vs.resize(n + 10);
        for (int i = 0; i < k; i++)
        {
            int x, y, z;
            cin >> x >> y >> z;
            ke[x].push_back({y, z});
            ke[y].push_back({x, z});
        }
        dijkstra(u);
        cout << endl;
    }
}