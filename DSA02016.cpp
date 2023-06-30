#include <bits/stdc++.h>
using namespace std;
vector<int> c, p, v, res;
int n;
int dem;

void ql(int j)
{
    for (int i = 1; i <= n; i++)
    {
        if (!v[i] && !c[i - j + n] && !p[i + j - 1])
        {
            v[i] = 1;
            c[i - j + n] = 1;
            p[i + j - 1] = 1;
            if (j == n)
                dem++;
            else
                ql(j + 1);
            v[i] = 0;
            c[i - j + n] = 0;
            p[i + j - 1] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        c.clear();
        p.clear();
        c.resize(2 * n + 10, 0);
        p.resize(2 * n + 10, 0);
        v.clear();
        v.resize(n + 10, 0);
        dem = 0;
        ql(1);
        cout << dem << endl;
    }
}