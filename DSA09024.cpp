#include <bits/stdc++.h>
using namespace std;

int n, k, u;
vector<int> ke[1001];
bool vs[1001];
queue<int> q;

void bfs(int j)
{
    q.push(j);
    vs[j] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for (auto i : ke[v])
        {
            if (vs[i] == false)
            {
                q.push(i);
                vs[i] = true;
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
        for (int i = 0; i < 1001; i++)
        {
            vs[i] = false;
            ke[i].clear();
        }
        while (!q.empty())
            q.pop();
        cin >> n >> k >> u;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        bfs(u);
        cout << endl;
    }
}