#include <bits/stdc++.h>
using namespace std;
vector<int> a;
vector<bool> vs;
int n;
void solve(vector<int> k)
{
    for (int i = 1; i < n; i++)
    {
        if (abs(k[i] - k[i + 1]) == 1)
            return;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << k[i];
    }
    cout << endl;
}

void hvql(int j)
{
    for (int i = 1; i <= n; i++)
    {
        if (!vs[i])
        {
            vs[i] = true;
            a[j] = i;
            if (j == n)
                solve(a);
            else
                hvql(j + 1);
            vs[i] = false;
        }
    }
}

void haq()
{
    cin >> n;
    a.resize(n + 1, 0);
    vs.resize(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        a[i] = i;
    }
    hvql(1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        haq();
    }
}