#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = i; j >= 0; j--)
            {
                sum += a[j];
                if (sum > max)
                    max = sum;
            }
        }
        cout << max << endl;
    }
}