#include <bits/stdc++.h>
using namespace std;

vector<long long> v(27);

void pre()
{
    v[1] = 1;
    for (int i = 2; i < 27; i++)
    {
        v[i] = v[i - 1] * 2;
    }
}

void haq()
{
    long long n, k;
    cin >> n >> k;
    for (int i = n; i >= 1; i--)
    {
        if (k > v[i])
            k -= v[i];
        else if (k == v[i])
        {
            char x = 'A' + i - 1;
            cout << x;
            return;
        }
    }
}

int main()
{
    pre();
    int t;
    cin >> t;
    while (t--)
    {
        haq();
        cout << endl;
    }
}