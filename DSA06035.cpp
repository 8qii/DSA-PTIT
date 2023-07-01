#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n + 1];
        long long b[n + 1];
        long long c[n + 1];
        long long d[n + 1];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = 1;
            c[i] = 1;
        }
        long long maxx = 0;
        for (long long i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
                b[i] = b[i - 1] + 1;
        }
        for (long long i = n - 2; i >= 0; i--)
        {
            if (a[i] > a[i + 1])
                c[i] = c[i + 1] + 1;
        }
        for (long long i = 0; i < n; i++)
        {
            d[i] = b[i] + c[i];
            maxx = max(maxx, d[i]);
        }
        cout << maxx - 1 << endl;
    }
}