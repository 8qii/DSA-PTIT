#include <bits/stdc++.h>
using namespace std;

void hq()
{
    long long n, k;
    cin >> n >> k;
    long long a[n + 5];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<long long, long long> mp;
    mp.clear();
    mp[0] = 1;
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (mp[sum - k])
        {
            cout << "YES";
            return;
        }
        else
            mp[sum]++;
    }
    cout << "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        hq();
        cout << endl;
    }
}