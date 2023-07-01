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
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            int k = s[i] - '0';
            if (k >= 0 && k <= 9)
                st.push(k);
            else if (s[i] == '*')
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int c = a * b;
                st.push(c);
            }
            else if (s[i] == '/')
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int c = b / a;
                st.push(c);
            }
            else if (s[i] == '+')
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int c = a + b;
                st.push(c);
            }
            else if (s[i] == '-')
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int c = b - a;
                st.push(c);
            }
        }
        cout << st.top() << endl;
    }
}