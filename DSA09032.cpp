#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;
int cnt;

void dfs(int j)
{
    cnt++;
    vs[j] = true;
    for (auto i : ke[j])
    {
        if (!vs[i])
            dfs(i);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ke.clear();
        ke.resize(n + 2);
        vs.clear();
        vs.resize(n + 2);
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int max = 0;
        for (int i = 1; i <= n; i++)
        {
            cnt = 0;
            if (!vs[i])
                dfs(i);
            if (cnt > max)
                max = cnt;
        }
        cout << max << endl;
    }
}