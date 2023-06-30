#include <bits/stdc++.h>
using namespace std;

vector<long long> v(51);
void pre()
{
    v[1] = 1;
    for (int i = 2; i < 51; i++)
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
            cout << i;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    pre();
    while (t--)
    {
        haq();
        cout << endl;
    }
}