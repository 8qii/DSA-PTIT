#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> ke;
vector<bool> vs;
int key;

void dfs(int j)
{
    vs[j] = true;
    for (auto i : ke[j])
        if (!vs[i])
            dfs(i);
}

void dfs_(int j)
{
    vs[j] = true;
    for (auto i : ke[j])
        if (!vs[i] && i != key)
            dfs_(i);
}

void testcase()
{
    cin >> n >> k;
    ke.clear();
    ke.resize(n + 1);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    vs.clear();
    vs.resize(n + 1, false);
    int lthong = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            lthong++;
            dfs(i);
        }
    }
    vs.clear();
    vs.resize(n + 1, false);
    key = 1;
    int tplt = 0;
    for (int i = 2; i <= n; i++)
    {
        if (!vs[i])
        {
            tplt++;
            dfs_(i);
        }
    }
    if (tplt > lthong)
        cout << 1 << " ";
    for (key = 2; key <= n; key++)
    {
        tplt = 0;
        vs.clear();
        vs.resize(n + 1, false);
        for (int i = 1; i <= n; i++)
        {
            if (i != key)
            {
                if (!vs[i])
                {
                    tplt++;
                    dfs_(i);
                }
            }
        }
        if (tplt > lthong)
            cout << key << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
        cout << endl;
    }
}