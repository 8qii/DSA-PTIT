#include <bits/stdc++.h>
using namespace std;

long long f[100];

void prepare()
{
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i < 100; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main()
{
    prepare();
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        while (1)
        {
            if (n == 1)
            {
                cout << 0;
                break;
            }
            if (n == 2)
            {
                cout << 1;
                break;
            }
            if (k > f[n - 2])
            {
                k -= f[n - 2];
                n--;
            }
            else
                n -= 2;
        }
        cout << endl;
    }
}