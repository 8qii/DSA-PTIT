#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+1];
        for(int i = 0 ; i < n ; i ++ ){
            cin >> a[i];
        }
        sort(a,a+n);
        long long ans = 0; // note
        for (int i = 0; i < n; ++i) {
            ans += upper_bound(a + i + 1, a+n, k - a[i]) - lower_bound(a + i + 1, a+n, k - a[i]);
        }
        cout << ans <<endl;
}
    }