#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long k;
        cin >> n >> k;
        bool found = false;
        long long a[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (a[0] > k)
            cout << -1 << endl;
        else
        {
            int j = upper_bound(a, a + n, k) - a;
            cout << j << endl;
        }
    }
}