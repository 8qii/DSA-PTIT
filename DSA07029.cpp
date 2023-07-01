#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        stack<string> st;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            if (s[i] != ']')
            {
                string k = string(1, s[i]);
                st.push(k);
            }
            else if (s[i] == ']')
            {
                string k = "";
                while (st.top() != "[")
                {
                    k = st.top() + k;
                    st.pop();
                }
                st.pop();
                string p = st.top();
                int b = p.length() - 1;
                while (isdigit(p[b]))
                {
                    b--;
                }
                int g = p.length() - 1 - b;
                if (g > 0)
                {
                    string str = p.substr(b, g);
                    int m = stoi(str);
                    st.pop();
                    string tmp = "";
                    for (int i = 0; i < m; i++)
                    {
                        tmp += k;
                    }
                    st.push(tmp);
                }
                else
                    st.push(k);
                // if (x <= '9' && x >= '1')
                // {
                //     int m = stoi(p);
                //     st.pop();
                //     string tmp = "";
                //     for (int i = 0; i < m; i++)
                //     {
                //         tmp += k;
                //     }
                //     st.push(tmp);
                // }
                // else
                //     st.push(k);
            }
        }
        string res = st.top();
        cout << res << endl;
    }
}