#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int b[n + 1] = {};
    int maxx = 1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b[x] = b[x - 1] + 1;
        maxx = max(maxx, b[x]);
    }
    cout << n - maxx;
}