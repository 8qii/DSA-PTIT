#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1];
        stack<int> st;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        st.push(0);
        for (int i = 1; i <= n; i++)
        {
            while (!st.empty() && a[i] >= a[st.top()])
            {
                st.pop();
            }
            if (st.empty())
                cout << i << " ";
            else
                cout << i - st.top() << " ";
            st.push(i);
        }
        cout << endl;
    }
}