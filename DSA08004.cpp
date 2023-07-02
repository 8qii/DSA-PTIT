#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int m[30] = {};
        for (int i = 0; i < s.length(); i++)
        {
            int tmp = s[i] - 64;
            m[tmp]++;
        }
        priority_queue<long long> pq;
        for (int i = 0; i < 30; i++)
        {
            if (m[i] > 0)
                pq.push(m[i]);
        }
        while (k--)
        {
            long long tmp = pq.top();
            pq.pop();
            tmp--;
            pq.push(tmp);
        }
        long long res = 0;
        while (!pq.empty())
        {
            long long tmp = pq.top();
            pq.pop();
            res += tmp * tmp;
        }
        cout << res << endl;
    }
}