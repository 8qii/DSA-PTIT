#include <bits/stdc++.h>
using namespace std;

void haq()
{
    int n;
    cin >> n;
    vector<int> a;
    vector<int> b;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        b.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << i + 1 << endl;
            return;
        }
    }
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