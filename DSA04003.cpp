#include <bits/stdc++.h>
using namespace std;

const int mod = 123456789;
long long big(int n, long long k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    long long x = big(n, k / 2);
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
        long long b = big(2, n - 1);
        cout << b << endl;
    }
}