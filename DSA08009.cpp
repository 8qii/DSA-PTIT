#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int f[10001];
        for (int i = n; i > 0; i--)
        {
            f[i] = n - i;
        }
        if (k <= n)
            cout << f[k];
        else
        {
            for (int i = n + 1; i <= k; i++)
            {
                if (i % 2 == 0)
                    f[i] = f[i / 2] + 1;
                else
                {
                    f[i] = f[(i + 1) / 2] + 2;
                }
            }
            cout << f[k];
        }
        cout << endl;
    }
}