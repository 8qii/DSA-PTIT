#include <bits/stdc++.h>
using namespace std;

void testcase()
{
    int n, k, l;
    cin >> n >> k >> l;
    vector<int> a, b;
    a.resize(n);
    b.resize(k);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
        cin >> b[i];
    int count = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < k)
    {
        if (a[i] > b[j])
        {
            count++;
            if (count == l)
            {
                cout << b[j];
                return;
            }
            j++;
        }
        else if (a[i] <= b[j])
        {
            count++;
            if (count == l)
            {
                cout << a[i];
                return;
            }
            i++;
        }
    }
    while (i < n)
    {
        count++;
        i++;
        if (count == l)
        {
            cout << a[i];
            return;
        }
    }
    while (j < k)
    {
        count++;
        j++;
        if (count == l)
        {
            cout << b[j];
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
        cout << endl;
    }
}