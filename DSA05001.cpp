#include <bits/stdc++.h>
using namespace std;
void dp()
{
    string a;
    string b;
    cin >> a;
    cin >> b;
    int maxx = 0;
    int n = a.length();
    int k = b.length();
    int x[n + 1][k + 1];
    for (int i = 0; i <= n; i++)
        x[i][0] = 0;
    for (int i = 0; i <= k; i++)
        x[0][i] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (a[i - 1] == b[j - 1])
                x[i][j] = x[i - 1][j - 1] + 1;
            else
                x[i][j] = max(x[i - 1][j], x[i][j - 1]);
            maxx = max(maxx, x[i][j]);
        }
    }
    cout << maxx << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        dp();
    }
}
