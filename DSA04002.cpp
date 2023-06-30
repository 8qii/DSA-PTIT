#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
long long dao(long long n)
{
    long long k = 0;
    while (n > 0)
    {
        k = k * 10 + n % 10;
        n /= 10;
    }
    return k;
}
long long powto(long long n, long long k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n % mod;
    long long x = powto(n, k / 2);
    long long y = (x * x) % mod;
    if (k % 2 == 0)
        return y;
    else
        return (n * y) % mod;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long b = dao(n);
        long long i = powto(n, b);
        cout << i << endl;
    }
}
