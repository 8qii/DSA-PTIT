#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int f[n + 5] = {};
        f[1] = a;
        for (int i = 2; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                f[i] = min(f[i - 1] + a, f[i / 2] + c);
            }
            else
                f[i] = min({f[i - 1] + a, f[(i - 1) / 2] + a + c, f[(i + 1) / 2] + c + b});
        }
        cout << f[n] << endl;
    }
}