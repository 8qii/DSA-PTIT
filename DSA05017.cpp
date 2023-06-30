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
            b[i] = a[i];
            c[i] = a[i];
        }
        for (long long i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a[j] < a[i])
                    b[i] = max(b[i], b[j] + a[i]);
            }
        }
        for (long long i = n - 1; i >= 0; i--)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] < a[i])
                    c[i] = max(c[i], c[j] + a[i]);
            }
        }
        long long sum = 0;
        for (long long i = 0; i < n; i++)
        {
            d[i] = b[i] + c[i] - a[i];
            if (sum < d[i])
            {
                sum = d[i];
            }
        }
        cout << sum << endl;
    }
}