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
        int f[100001];
        f[1] = 0;
        f[2] = 1;
        f[3] = 1;
        for (int i = 4; i <= n; i++)
        {
            f[i] = f[i - 1] + 1;
            if (i % 3 == 0)
                f[i] = min(f[i], f[i / 3] + 1);
            if (i % 2 == 0)
                f[i] = min(f[i], f[i / 2] + 1);
                }
        cout << f[n] << endl;
    }
}