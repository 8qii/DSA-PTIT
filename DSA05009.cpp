#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
vector<int> b;
bool got;
long long sum, res;
void solve()
{
    long long sum1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
            sum1 += a[i];
    }
    if (sum1 == res)
        got = true;
}

void bin(int j)
{
    for (int i = 0; i <= 1; i++)
    {
        b[j] = i;
        if (j == n - 1)
            solve();
        else
            bin(j + 1);
    }
}

void haq()
{
    sum = 0;
    got = false;
    cin >> n;
    a.resize(n, 0);
    b.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 2 == 1)
    {
        cout << "NO";
        return;
    }
    res = sum / 2;
    bin(0);
    if (got)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        haq();
        cout << endl;
    }
}