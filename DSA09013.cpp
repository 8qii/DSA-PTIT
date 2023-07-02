#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[1000][1000];
vector<bool> vs;

void dfs(int j)
{
    vs[j] = true;
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i] && a[i][j] == 1)
            dfs(i);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        memset(a, 0, sizeof(a));
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            a[x][y] = 1;
            a[y][x] = 1;
        }
        vs.clear();
        vs.resize(n + 1, false);
        int tp_chinh = 0;

        // dem tplt chinh
        for (int i = 1; i <= n; i++)
        {
            if (!vs[i])
            {
                tp_chinh++;
                dfs(i);
            }
        }

        // search canh cau bang pp loai canh
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (a[i][j] == 1 && i < j)
                {
                    int tp_con = 0;
                    vs.clear();
                    vs.resize(n + 1, false);
                    a[i][j] = 0;
                    a[j][i] = 0;
                    for (int d = 1; d <= n; d++)
                    {
                        if (!vs[d])
                        {
                            tp_con++;
                            dfs(d);
                        }
                    }
                    a[i][j] = 1;
                    a[j][i] = 1;
                    if (tp_con > tp_chinh)
                        cout << i << " " << j << " ";
                }
            }
        }
        cout << endl;
    }
}