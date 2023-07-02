#include <bits/stdc++.h>
using namespace std;
void haq()
{
    int n;
    cin >> n;
    queue<string> q;
    stack<int> st;
    q.push("9");
    vector<long long> res;
    while (1)
    {
        string k = q.front() + "0";
        if (k.length() > 10)
            break;
        q.push(k);
        k = q.front() + "9";
        q.push(k);
        res.push_back(stoll(q.front()));
        q.pop();
    }
    while (!q.empty())
    {
        res.push_back(stoll(q.front()));
        q.pop();
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] % n == 0)
        {
            cout << res[i];
            break;
        }
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        haq();
    }
}