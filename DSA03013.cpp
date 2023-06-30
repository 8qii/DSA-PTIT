#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mark[300] = {};
        int maxi = 0;
        for (char i : s)
        {
            mark[i]++;
            maxi = max(maxi, mark[i]);
        }
        if (maxi * n - 1 > s.length())
            cout << -1;
        else
            cout << 1;
        cout << endl;
    }
}