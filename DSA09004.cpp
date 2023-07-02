#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1001];
bool tham[1001];
int n, k, u;
void nhap()
{
    cin >> n >> k >> u;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void dfs(int l)
{
    cout << l << " ";
    tham[l] = true;
    for (auto v : ke[l])
    {
        if (!tham[v])
            dfs(v);
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
            tham[i] = false;
            ke[i].clear();
        }
        nhap();
        dfs(u);
        cout << endl;
    }
}