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
            dfs(i);
    }
}

void testcase()
{
    cin >> n >> k;
    int lt = 0;
    ke.clear();
    ke.resize(n + 10);
    vs.clear();
    vs.resize(n + 10, false);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            dfs(i);
            lt++;
        }
    }
    cout << lt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
    }
}