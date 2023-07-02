#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<pair<int, int>> p;

void haq()
{
    cin >> n >> k;
    p.clear();
    p.resize(n + 1);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        p[x].first++;
        p[y].second++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (p[i].first != p[i].second)
        {
            cout << 0;
            return;
        }
    }
    cout << 1;
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