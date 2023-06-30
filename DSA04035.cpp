#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

long long big(long long a, long long b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    long long x = big(a, b / 2);
    long long y = (x * x) % mod;
    if (b % 2 == 0)
        return y;
    else
        return (y * a) % mod;
}

int main()
{
    while (1)
    {
        long long n, k;
        cin >> n >> k;
        if (n == 0 && k == 0)
            break;
        long long res = big(n, k);
        cout << res << endl;
    }
}