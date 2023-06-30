#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int ok = 0;
        int a[100001];
        for(int i = 0 ; i < n ; i ++){
            cin >> a[i]; 
        }
        for(int i = 0 ; i < n ; i ++){
            if(a[i]==k) {
                ok=1;
                cout << i+1 << endl ;
                break;
            }
        }
        if(!ok) cout << "NO" << endl ;
    }
}