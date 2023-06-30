#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        long long sum = 0;
        long long f[20];
        f[0] = s[0] - '0';
        sum = f[0];
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                string k = s.substr(j, i - j + 1);
                sum += stoll(k);
            }
        }
        cout << sum << endl;
    }
}