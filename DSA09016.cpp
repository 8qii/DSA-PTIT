#include <bits/stdc++.h>
using namespace std;
int n, k;
vector<vector<int>> ke;
vector<bool> vs;
vector<int> sz;
bool found;
int p;

void dfs(int j)
{
    vs[j] = true;
    sz.push_back(j);
    if (sz.size() == n)
    {
        for (auto i : ke[j])
        {
            if (i == p)
            {
                found = true;
                return;
            }
        }
    }
    else
    {
        for (auto i : ke[j])
        {
            if (!vs[i])
            {
                dfs(i);
            }
        }
    }
    sz.pop_back();
}

void testcase()
{
    cin >> n >> k;
    found = false;
    ke.clear();
    ke.resize(n + 1);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }
    for (p = 1; p <= n; p++)
    {
        vs.clear();
        sz.clear();
        vs.resize(n + 1);
        dfs(p);
    }
    if (found)
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