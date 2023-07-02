#include <bits/stdc++.h>
using namespace std;
void haq()
{
    long long n;
    cin >> n;
    if (n == 0)
        return;
    queue<string> q;
    string k = "1";
    q.push(k);
    vector<string> res;
    while (1)
    {
        k = q.front() + '0';
        if (stoll(k) > n)
            break;
        q.push(k);
        k = q.front() + '1';
        if (stoll(k) > n)
            break;
        q.push(k);
        res.push_back(q.front());
        q.pop();
    }
    while (!q.empty())
    {
        res.push_back(q.front());
        q.pop();
    }
    cout << res.size() << endl;
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