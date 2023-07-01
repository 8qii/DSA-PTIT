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
        for (int i = s.length() - 1; i >= 0; i--)
        {
            string tmp = "";
            tmp += s[i];
            if (s[i] == '+' || s[i] == '-' || s[i] == '/' || s[i] == '*')
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string c = '(' + a + tmp + b + ')';
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