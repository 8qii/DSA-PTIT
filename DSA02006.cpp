#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[20];
vector<string> res;
string s;
void solve(int j)
{
    for (int i = 0; i <= 1; i++)
    {
        if (i == 0)
            s[j] = '0';
        else
            s[j] = '1';
        if (j == n - 1)
        {
            int sum = 0;
            for (int h = 0; h < n; h++)
            {
                if (s[h] == '1')
                    sum += a[h];
            }
            if (sum == k)
            {
                string ss = "[";
                for (int h = 0; h < n; h++)
                {
                    if (s[h] == '1')
                        ss = ss + to_string(a[h]) + " ";
                }
                int g = ss.length() - 1;
                ss[g] = ']';
                res.push_back(ss);
            }
        }
        else
            solve(j + 1);
    }
}

void hvdq()
{
    res.clear();
    cin >> n >> k;
    s.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    solve(0);
    if (res.empty())
        cout << -1;
    else
    {
        for (int i = res.size() - 1; i >= 0; i--)
        {
            cout << res[i] << " ";
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        hvdq();
        cout << endl;
    }
}