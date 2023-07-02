#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> ke;
vector<bool> vs;

void bfs(int start)
{
    queue<int> q;
    q.push(start);
    vs[start] = true;

    while (!q.empty())
    {
        int u;
        u = q.front();
        q.pop();
        for (int v : ke[u])
        {
            if (vs[v] == false)
            {
                q.push(v);
                vs[v] = true;
            }
        }
    }
}

void testcase()
{
    cin >> n >> k;
    ke.clear();
    ke.resize(n + 2);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        vs.clear();
        vs.resize(n + 2, false);
        bfs(x);
        if (vs[y])
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
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