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
            int k;
            cin >> k;
            q.push(k);
        }
        long long res = 0;
        while (q.size() > 1)
        {
            int first = q.top();
            q.pop();
            int second = q.top();
            q.pop();
            q.push(first + second);
            res += first + second;
            res = res % mod;
        }
        cout << res << endl;
    }
}