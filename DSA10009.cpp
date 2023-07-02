#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9;
int n, k;
int a[1000][1000];
int d[1000][1000];
// vector<int> e;

void floyd()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            d[i][j] = a[i][j];
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int s, v;
        cin >> s >> v;
        cout << d[s][v];
        cout << endl;
    }
}

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = inf;
        }
    }
    for (int i = 0; i < k; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y] = z;
        a[y][x] = z;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i][i] = 0;
    }
    floyd();
}