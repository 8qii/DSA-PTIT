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
        int ok = 0;
        for (int i = n / 7; i >= 0; i--)
        {
            int k = n - i * 7;
            if (k % 4 == 0)
            {
                for (int j = 0; j < k / 4; j++)
                {
                    cout << 4;
                }
                for (int j = 0; j < i; j++)
                {
                    cout << 7;
                }
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << -1;
        cout << endl;
    }
}