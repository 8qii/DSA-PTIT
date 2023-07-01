#include <bits/stdc++.h>
using namespace std;
void HAQ()
{
    string s;
    cin >> s;
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ')' && !st.empty() && st.top() == '(')
        {
            st.pop();
        }
        else if (s[i] == '}' && !st.empty() && st.top() == '{')
        {
            st.pop();
        }
        else if (s[i] == ']' && !st.empty() && st.top() == '[')
        {
            st.pop();
        }
        else
            st.push(s[i]);
    }
    if (st.empty())
        cout << "YES";
    else
        cout << "NO";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        HAQ();
        cout << endl;
    }
}