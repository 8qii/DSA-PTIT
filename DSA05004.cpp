#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (a[j] < a[i])
                b[i] = max(b[i], b[j] + 1);
        }
    }
    sort(b, b + n);
    cout << b[n - 1];
}