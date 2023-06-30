#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        bool found = false;
        cin >> n >> k >> m;
        int x = 0, y = 0, z = 0;
        int a[n], b[k], c[m];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
        }
        while (x < n && y < k && z < m)
        {
            if (a[x] == b[y] && b[y] == c[z])
            {
                cout << a[x] << " ";
                found = true;
                x++;
                y++;
                z++;
            }
            else if (a[x] < b[y])
                x++;
            else if (b[y] < c[z])
                y++;
            else
                z++;
        }
        if (!found)
            cout << "NO";
        cout << endl;
    }
}