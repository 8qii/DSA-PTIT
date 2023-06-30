#include <bits/stdc++.h>
using namespace std;

void testCase() {
    int n; cin >> n;
    map<int, bool> mp;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (mp[a[i]] == 0) {
            cout << a[i] << " ";
            mp[a[i]] = 1;
        }
    }
}

int main() {
    int T = 1;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}