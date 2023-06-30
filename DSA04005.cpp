#include <bits/stdc++.h>
using namespace std;

long long f[100];
void prepare()
{
    f[1] = 1;
    f[2] = 1;
    for (int i = 3; i < 93; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
}

void hqi()
{
    int n;
    long long k;
    cin >> n >> k;
    int h = n;
    while (true)
    {
        if (n == 1 || n == 2)
        {
            if (n == 1)
                cout << "A";
            else
                cout << "B";
            return;
        }
        else
        {
            if (k > f[n - 2])
            {
                k -= f[n - 2];
                n--;
            }
            else
                n -= 2;
        }
    }
}

int main()
{
    prepare();
    int t;
    cin >> t;
    while (t--)
    {
        hqi();
        cout << endl;
    }
}