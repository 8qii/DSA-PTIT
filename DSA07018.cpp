#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        string z;
        getline(cin, z);
        s = s + " + " + z;
        stringstream ss(s);
        string tmp;
        int a[100001] = {};
        while (ss >> tmp)
        {
            int n = tmp.length();
            if (tmp == "+")
                continue;
            else
            {
                int i = 0;
                while (isdigit(tmp[i]))
                    i++;
                int x = stoi(tmp.substr(0, i));
                while (!isdigit(tmp[i]))
                    i++;
                int y = stoi(tmp.substr(i));
                a[y] += x;
            }
        }
        string res = "";
        for (int i = 10000; i >= 0; i--)
        {
            if (a[i] > 0)
            {
                res += to_string(a[i]) + "*x^" + to_string(i) + " + ";
            }
        }
        for (int i = 0; i < res.size() - 3; i++)
        {
            cout << res[i];
        }
        cout << endl;
    }
}