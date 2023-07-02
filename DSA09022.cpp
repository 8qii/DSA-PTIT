#include <bits/stdc++.h>
using namespace std;

bool vs[1001];
vector<int> v[1001];

void dfs(int n)
{
    cout << n << " ";
    vs[n] = true;
    for (auto i : v[n])
    {
        if (!vs[i])
            dfs(i);
    }
}

void nhap()
{
    int n, k, u;
    cin >> n >> k >> u;
    for (int i = 0; i < 1001; i++)
    {
        vs[i] = false;
        v[i].clear();
    }
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
    }
    dfs(u);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        nhap();
        cout << endl;
    }
}