#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void solve()
{
    for (int i = 1; i < n - 1; i++)
    {
        if ((a[i] == 1 || a[i] == 5) && (a[i - 1] != 1 && a[i - 1] != 5) && (a[i + 1] != 1 && a[i + 1] != 5))
            return;
    }
    for (int i = 0; i < n; i++)
    {
        char x;
        x = a[i] + 64;
        cout << x;
    }
    cout << endl;
}
void hvdq()
{
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
    }
    while (1)
    {
        solve();
        int i = n - 2;
        while (i >= 0 && a[i] > a[i + 1])
        {
            i--;
        }
        if (i == -1)
            return;
        else
        {
            int j = n - 1;
            while (a[j] < a[i])
            {
                j--;
            }
            swap(a[i], a[j]);
            sort(a.begin() + i + 1, a.end());
        }
    }
}

int main()
{
    char c;
    cin >> c;
    n = c - 64;
    a.resize(n, 0);
    hvdq();
}