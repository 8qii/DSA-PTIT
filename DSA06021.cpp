#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,x;
        cin >> n >> x;
        int count = 1;
        int ans=1;
        for(int i = 0 ; i < n ; i ++ ){
            int k;
            cin >> k;
            if(k==x){
                ans=count;
            }
            count++;
        }
        cout << ans << endl;;
    }
}