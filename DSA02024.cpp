#include <bits/stdc++.h>
using namespace std;
int n;
int a[30];
vector<int> v;
vector<string> res;
vector<int> tmp;
void solve()
{
    if (v.size() < 2)
    {
        return;
    }
    vector<int> vv = v;
    sort(vv.begin(), vv.end());
    int u = v.size();
    if (vv == v)
    {
        string s = "";
        for (int i = 0; i < u; i++)
        {
            s += to_string(v[i]) + " ";
        }
        res.push_back(s);
    }
}

void fn(int i)
{
    for (int j = 0; j <= 1; j++)
    {
        tmp[i] = j;
        if (i == n - 1)
        {
            v.clear();
            for (int k = 0; k < n; k++)
            {
                if (tmp[k] == 1)
                    v.push_back(a[k]);
            }
            solve();
        }
        else
            fn(i + 1);
    }
}
void haq()
{
    fn(0);
    sort(res.begin(), res.end());
    for (auto i : res)
    {
        cout << i;
        cout << endl;
    }
}

int main()
{
    cin >> n;
    res.clear();
    tmp.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    haq();
}