#include<bits/stdc++.h>
using namespace std;
void cb(){
    int n; cin >> n;
    int a[n+1];
    for(int i = 0 ; i < n ; i++ ){
        a[i] =0;
    }
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];    
        a[i] += a[i - 1];
    }

    for (int i = 1; i <= n; ++i) {
        int sum_left = a[i - 1];
        int sum_right = a[n] - a[i];
        if (sum_left == sum_right) {
            cout << i;
            return;
        }
    }
    cout << -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cb();
        cout <<endl;
    }
}