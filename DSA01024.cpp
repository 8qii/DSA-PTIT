#include <bits/stdc++.h>
using namespace std;
int n, k;
set<string> s;
vector<string> v;
int a[40];
void sth()
{
    while (1)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << v[a[i] - 1] << " ";
        }
        cout << endl;
        int i = k;
        while (i > 0 && a[i] == n - k + i)
        {
            i--;
        }
        if (i == 0)
            return;
        else
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
            {
                a[j] = a[i] + j - i;
            }
        }
    }
}

int main()
{
    v.clear();
    s.clear();
    cin >> n >> k;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string o;
        cin >> o;
        s.insert(o);
    }
    for (auto i : s)
    {
        v.push_back(i);
    }
    n = v.size();
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
    sth();
}