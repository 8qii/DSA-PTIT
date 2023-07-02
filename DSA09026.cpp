#include <bits/stdc++.h>
using namespace std;

int n, k, d, c;
vector<bool> vs;
vector<int> be;
vector<vector<int>> ke;

void bfs(int j)
{
    queue<int> q;
    q.push(j);
    vs[j] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        vs[v] = true;
        for (auto i : ke[v])
        {
            if (!vs[i])
            {
                q.push(i);
                vs[i] = true;
                be[i] = v;
            }
        }
    }
}

void fway()
{
    if (vs[c] == false)
    {
        cout << -1;
        return;
    }
    int now = c;
    stack<int> st;
    while (now != d)
    {
        st.push(now);
        now = be[now];
    }
    cout << d << " ";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void testcase()
{
    cin >> n >> k >> d >> c;
    ke.clear();
    ke.resize(n + 1);
    be.clear();
    be.resize(n + 1);
    vs.clear();
    vs.resize(n + 1, false);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
    }
    bfs(d);
    fway();
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