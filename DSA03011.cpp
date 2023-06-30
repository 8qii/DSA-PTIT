#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<long long, vector<long long>, greater<long long>> q;
        for (int i = 0; i < n; i++)
        {
            long long k;
            cin >> k;
            q.push(k);
        }
        long long res = 0;
        while (q.size() >= 2)
        {
            long long first = q.top();
            q.pop();
            long long second = q.top();
            q.pop();
            long long z = first + second;
            z = z % mod;
            q.push(z);
            res = (res + z) % mod;
        }
        cout << res << endl;
    }
}