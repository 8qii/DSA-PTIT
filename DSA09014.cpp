#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> ke;
vector<bool> vs;
bool ct;

void dfs(int j, int c)
{
    if (ct == true)
        return;
    if (c == n)
    {
        for (auto i : ke[j])
            if (i == 1)
                ct = true;
    }
    else
    {
        for (auto i : ke[j])
        {
            if (!vs[i])
            {
                vs[j] = true;
                dfs(i, c + 1);
                vs[j] = false;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ct = false;
        cin >> n >> k;
        ke.clear();
        ke.resize(n + 1);
        vs.clear();
        vs.resize(n + 1, false);
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        dfs(1, 1);
        if (ct)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}