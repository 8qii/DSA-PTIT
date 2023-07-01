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
        for (int i = 0; i < s.length(); i++)
        {
            string tmp = string(1, s[i]);
            if (s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string c = '(' + b + tmp + a + ')';
                st.push(c);
            }
            else
            {
                st.push(tmp);
            }
        }
        cout << st.top() << endl;
    }
}