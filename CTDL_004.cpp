#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[140];
vector<int> v;
vector<int> bin;
int dem = 0;
void solve()
{
    if (v.size() != k)
        return;
    vector<int> tmp = v;
    sort(tmp.begin(), tmp.end());
    if (tmp == v)
        dem++;
}

void haq(int j)
{
    for (int i = 0; i <= 1; i++)
    {
        bin[j] = i;
        if (j == n - 1)
        {
            v.clear();
            for (int p = 0; p < n; p++)
            {
                if (bin[p] == 1)
                    v.push_back(a[p]);
            }
            solve();
        }
        else
            haq(j + 1);
    }
}

int main()
{
    cin >> n >> k;
    bin.resize(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    haq(0);
    cout << dem;
}