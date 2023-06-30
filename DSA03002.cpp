#include <bits/stdc++.h>
using namespace std;
void testcase()
{
    int a, b, x, y;
    stack<int> st1, st2, st3, st4;
    cin >> a >> b;
    while (a > 0)
    {
        int m = a % 10;
        int n = m;
        if (m == 3)
            m = 5;
        if (n == 5)
            n = 3;
        st1.push(m);
        st2.push(n);
        a /= 10;
    }
    x = 0;
    y = 0;

    while (b > 0)
    {
        int m = b % 10;
        int n = m;
        if (m == 3)
            m = 5;
        if (n == 5)
            n = 3;
        st3.push(m);
        st4.push(n);
        b /= 10;
    }
    while (!st1.empty())
    {
        a = a * 10 + st1.top();
        st1.pop();
    }
    while (!st2.empty())
    {
        b = b * 10 + st2.top();
        st2.pop();
    }
    while (!st3.empty())
    {
        x = x * 10 + st3.top();
        st3.pop();
    }
    while (!st4.empty())
    {
        y = y * 10 + st4.top();
        st4.pop();
    }
    cout << b + y << " " << a + x;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        testcase();
        cout << endl;
    }
}