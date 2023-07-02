#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> a;
vector<vector<bool>> b;

void flex(int x, int y)
{
    b[x][y] = true;
    if (a[x + 1][y] == 'W' && !b[x + 1][y])
        flex(x + 1, y);
    if (a[x - 1][y] == 'W' && !b[x - 1][y])
        flex(x - 1, y);
    if (a[x][y + 1] == 'W' && !b[x][y + 1])
        flex(x, y + 1);
    if (a[x][y - 1] == 'W' && !b[x][y - 1])
        flex(x, y - 1);
    if (a[x - 1][y - 1] == 'W' && !b[x - 1][y - 1])
        flex(x - 1, y - 1);
    if (a[x - 1][y + 1] == 'W' && !b[x - 1][y + 1])
        flex(x - 1, y + 1);
    if (a[x + 1][y + 1] == 'W' && !b[x + 1][y + 1])
        flex(x + 1, y + 1);
    if (a[x + 1][y - 1] == 'W' && !b[x + 1][y - 1])
        flex(x + 1, y - 1);
}

int main()
{
    int n, k;
    int count = 0;
    cin >> n >> k;
    a.clear();
    a.resize(n + 4);
    b.clear();
    b.resize(n + 4);
    for (int i = 0; i <= n + 2; i++)
    {
        for (int j = 0; j <= k + 2; j++)
        {
            a[i].push_back('.');
            b[i].push_back(false);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (a[i][j] == 'W' && !b[i][j])
            {
                flex(i, j);
                count++;
            }
        }
    }
    cout << count << endl;
}