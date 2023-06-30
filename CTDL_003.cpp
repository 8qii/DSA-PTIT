#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> a;
vector<int> b;
vector<int> v;
int maxx;
vector<int> res;

void solve()
{
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
        {
            sum1 += a[i];
            sum2 += v[i];
        }
    }
    if (sum2 <= k)
    {
        if (sum1 > maxx)
        {
            maxx = sum1;
            res.clear();
            for (int i = 0; i < n; i++)
            {
                res.push_back(b[i]);
            }
        }
    }
}

void tryy(int j)
{
    if (j == n)
        solve();
    else
    {
        for (int i = 0; i <= 1; i++)
        {
            b[j] = i;
            tryy(j + 1);
        }
    }
}

int main()
{
    maxx = 0;
    cin >> n >> k;
    a.resize(n + 1);
    v.resize(n + 1);
    b.resize(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    tryy(0);
    cout << maxx << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}