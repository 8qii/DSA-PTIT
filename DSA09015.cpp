#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<int> vs;
vector<vector<int>> adj;
bool fin;

void dfs(int j)
{
    if (fin)
        return;
    vs[j] = 1;
    for (auto i : adj[j])
    {
        if (vs[i] == 0)
            dfs(i);
        else if (vs[i] == 1)
        {
            fin = true;
            return;
        }
    }
    vs[j] = 2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        fin = false;
        vs.clear();
        vs.resize(n + 1, 0);
        adj.clear();
        adj.resize(n + 1);
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        for (int i = 1; i <= n; i++)
        {
            if (vs[i] == 0 && !fin)
                dfs(i);
        }
        if (fin)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}