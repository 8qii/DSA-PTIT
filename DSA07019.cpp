#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long max = 0;
        for (long long i = 0; i < n; i++)
        {
            long long cnt = 1;
            long long p = i - 1;
            while (p >= 0 && a[p] >= a[i])
            {
                p--;
                cnt++;
            }
            p = i + 1;
            while (p < n && a[p] >= a[i])
            {
                p++;
                cnt++;
            }
            long long sqr = a[i] * cnt;
            if (sqr > max)
                max = sqr;
        }
        cout << max << endl;
    }
}