#include <bits/stdc++.h>
using namespace std;
int n;
int a[10][10];
int vs[10][10];
vector<string> res;
void mt(int i, int j, string s)
{
    vs[i][j] = 0;
    if (a[0][0] == 0 || a[n - 1][n - 1] == 0)
        return;
    if (i == n - 1 && j == n - 1)
    {
        res.push_back(s);
        return;
    }
    else
    {
        if (a[i + 1][j] == 1 && vs[i + 1][j] == 1 && i + 1 < n)
        {
            mt(i + 1, j, s + "D");
            vs[i + 1][j] = 1;
        }
        if (a[i][j + 1] == 1 && vs[i][j + 1] == 1 && j + 1 < n)
        {
            mt(i, j + 1, s + "R");
            vs[i][j + 1] = 1;
        }
        if (a[i][j - 1] == 1 && vs[i][j - 1] == 1 && j - 1 >= 0)
        {
            mt(i, j - 1, s + "L");
            vs[i][j - 1] = 1;
        }
        if (a[i - 1][j] == 1 && vs[i - 1][j] == 1 && i - 1 >= 0)
        {
            mt(i - 1, j, s + "U");
            vs[i - 1][j] = 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                vs[i][j] = 1;
            }
        }
        mt(0, 0, "");
        sort(res.begin(), res.end());
        if (res.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < res.size(); i++)
            {
                cout << res[i] << " ";
            }
        cout << endl;
    }
}