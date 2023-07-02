#include <bits/stdc++.h>
using namespace std;

int n, k, u, o;
vector<vector<int>> ke;
vector<bool> vs;
vector<int> be;

void dfs(int j)
{
    vs[j] = true;
    for (auto i : ke[j])
    {
        if (!vs[i])
        {
            be[i] = j;
            dfs(i);
        }
    }
}

void fway()
{
    if (!vs[o])
    {
        cout << -1;
        return;
    }
    int now = o;
    stack<int> st;
    while (now != u)
    {
        st.push(now);
        now = be[now];
    }
    cout << u << " ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> u >> o;
        ke.clear();
        ke.resize(n + 1);
        be.clear();
        be.resize(n + 1);
        vs.clear();
        vs.resize(n + 1);
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        dfs(u);
        fway();
        cout << endl;
    }
}