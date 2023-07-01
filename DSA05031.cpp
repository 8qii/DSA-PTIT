#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f[n + 1] = {};
        for (int i = 1; i <= n; i++)
        {
            f[i] = i;
            for (int j = 1; j <= sqrt(i); j++)
            {
                f[i] = min(f[i], f[i - j * j] + 1);
            }
        }
        cout << f[n] << endl;
    }
}