#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> ke;
vector<bool> vs;

void dfs(int j)
{
    vs[j] = true;
    for (auto i : ke[j])
    {
        if (!vs[i])
        {
            dfs(i);
        }
    }
}

void testcase()
{
    int tplt = 0;
    cin >> n >> k;
    ke.clear();
    ke.resize(n + 2);
    vs.clear();
    vs.resize(n + 2, false);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            tplt++;
            dfs(i);
        }
    }
    if (tplt == 1)
        cout << "YES";
    else
        cout << "NO";
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