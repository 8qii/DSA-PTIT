#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<bool> vs;
vector<vector<int>> ke;
int x[20];
bool ok;

void hmt(int k)
{
    if (k == n)
    {
        ok = true;
        return;
    }
    else
    {
        for (auto i : ke[x[k - 1]])
            if (!vs[i])
            {
                vs[i] = true;
                x[k] = i;
                hmt(k + 1);
                vs[i] = false;
            }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        vs.clear();
        vs.resize(n + 100, false);
        ke.clear();
        ke.resize(n + 100);
        ok = false;
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        memset(x, 0, sizeof(x));
        x[1] = 1;
        vs[1] = true;
        hmt(2);
        if (!ok)
            cout << 0;
        else
            cout << 1;
        cout << endl;
    }
}