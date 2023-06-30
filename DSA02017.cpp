#include <bits/stdc++.h>
using namespace std;
vector<int> c, p, v, res;
int a[9][9];
int dem;
int maxx;

void ql(int j, int sum)
{
    for (int i = 1; i <= 8; i++)
    {
        if (!v[i] && !c[i - j + 8] && !p[i + j - 1])
        {
            sum += a[j][i];
            v[i] = 1;
            c[i - j + 8] = 1;
            p[i + j - 1] = 1;
            if (j == 8)
            {
                if (sum > maxx)
                    maxx = sum;
            }
            else
                ql(j + 1, sum);
            sum -= a[j][i];
            v[i] = 0;
            c[i - j + 8] = 0;
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
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> a[i][j];
            }
        }
        c.clear();
        p.clear();
        c.resize(2 * 8 + 10, 0);
        p.resize(2 * 8 + 10, 0);
        v.clear();
        v.resize(8 + 10, 0);
        dem = 0;
        maxx = INT_MIN;
        ql(1, 0);
        cout << maxx << endl;
    }
}