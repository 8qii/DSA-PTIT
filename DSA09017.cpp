#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;

void dfs(int j)
{
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
        int n;
        cin >> n;
        ke.clear();
        ke.resize(n + 1);
        vs.clear();
        vs.resize(n + 1, false);
        for (int i = 0; i < n - 1; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        bool fd = true;
        dfs(1);
        for (int i = 1; i <= n; i++)
        {
            if (!vs[i])
                fd = false;
        }
        if (!fd)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }
}