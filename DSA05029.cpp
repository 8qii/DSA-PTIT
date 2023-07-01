#include <bits/stdc++.h>
using namespace std;

void hqi()
{
    string s;
    cin >> s;
    int n = s.length();
    s = "#" + s;
    long long f[42];
    f[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '0')
        {
            if (i == 1 || (s[i - 1] != '1' && s[i - 1] != '2'))
            {
                cout << 0;
                return;
            }
            f[i] = f[i - 2];
        }
        else
        {
            f[i] = f[i - 1];
            if (i >= 2 && (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] <= '6')))
                f[i] += f[i - 2];
        }
    }
    cout << f[n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        hqi();
        cout << endl;
    }
}