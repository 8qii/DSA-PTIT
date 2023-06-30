#include <bits/stdc++.h>
using namespace std;

bool eth[201];
int x, y, z, n, k;
vector<int> bin;
vector<int> snt;
vector<string> res;

void solve()
{
    int count = 0;
    for (int i = 0; i < k; i++)
    {
        if (bin[i] == 1)
            count++;
    }
    if (count == x)
    {
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += bin[i] * snt[i];
            if (sum > z)
                return;
        }
        if (sum == z)
        {
            n++;
            string s = "";
            for (int i = 0; i < k; i++)
            {
                if (bin[i] == 1)
                    s += to_string(snt[i]) + " ";
            }
            res.push_back(s);
        }
    }
}

void qlnp(int j)
{
    for (int i = 0; i <= 1; i++)
    {
        bin[j] = i;
        if (j == k - 1)
            solve();
        else
            qlnp(j + 1);
    }
}

int main()
{
    eth[0] = false;
    eth[1] = false;
    for (int i = 2; i < 201; i++)
    {
        eth[i] = true;
    }
    for (int i = 2; i < 201; i++)
    {
        if (eth[i] == true)
        {
            for (int j = i * 2; j < 201; j += i)
            {
                eth[j] = false;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        n = 0;
        snt.clear();
        res.clear();
        cin >> x >> y >> z;
        for (int i = y; i < z; i++)
        {
            if (eth[i] == true)
            {
                snt.push_back(i);
            }
        }
        k = snt.size();
        bin.resize(k, 0);
        qlnp(0);
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << endl;
        }
    }
}