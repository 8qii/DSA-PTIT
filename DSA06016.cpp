#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long a[n+10];
        long long b[k+10];
        for(int i = 0 ;i < n ; i ++ ){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = 0 ;i < k ; i ++ ){
            cin >> b[i];
        }
        sort(b,b+k);
        long long ans =a[n-1]*b[0];
        cout << ans << endl;
    }
}