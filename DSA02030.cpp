#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> v;

void solve()
{
    for (int i = 0; i < k; i++)
    {
        char y = 65 + v[i];
        cout << y;
    }
    cout << endl;
}

void flex(int j)
{
    for (int i = j; i <= n; i++)
    {
        v.push_back(i);
        if (v.size() == k)
            solve();
        else
            flex(i);
        v.pop_back();
    }
}

int main()
{
    char x;
    cin >> x >> k;
    n = x - 65;
    v.clear();
    flex(0);
}