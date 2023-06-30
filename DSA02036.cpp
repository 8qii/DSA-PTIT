#include <bits/stdc++.h>
using namespace std;
int n;
int a[20], b[20];
vector<string> res;
void solve()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 1)
            sum += a[i];
    }
    if (sum % 2 != 0)
    {
        string s;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == 1)
                s += to_string(a[i]) + " ";
        }
        res.push_back(s);
    }
}

void tryy(int j)
{
    for (int i = 0; i <= 1; i++)
    {
        b[j] = i;
        if (j == n - 1)
            solve();
        else
            tryy(j + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        res.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<int>());
        tryy(0);
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << endl;
        }
    }
}