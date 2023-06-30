#include <bits/stdc++.h>
using namespace std;

int x[100];
int n, k;

void flex(int j)
{
    for (int i = x[j - 1] + 1; i <= n - k + j; i++)
    {
        x[j] = i;
        if (j == k)
        {
            for (int h = 1; h <= k; h++)
            {
                cout << x[h];
            }
            cout << " ";
        }
        else
            flex(j + 1);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        x[0] = 0;
        flex(1);
        cout << endl;
    }
}