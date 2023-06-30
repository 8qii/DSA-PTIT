#include <bits/stdc++.h>
using namespace std;

long long f[10001];

void prepare()
{
    long long x = 1, y = 1, z = 1;
    f[1] = 1;
    for (int i = 2; i <= 1e4; i++)
    {
        f[i] = min({f[x] * 2, f[y] * 3, f[z] * 5});
        if (f[x] * 2 == f[i])
            x++;
        if (f[y] * 3 == f[i])
            y++;
        if (f[z] * 5 == f[i])
            z++;
    }
}

int main()
{
    prepare();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << f[n];
        cout << endl;
    }
}