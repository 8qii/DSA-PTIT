#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        bool ok=true;
            for(int i =0 ; i < (n+1)/2 ; i++){
                if(a[i] > a[n-i-1]){
                    swap(a[i],a[n-i-1]);
                }
            }
            for(int i = 0 ; i < n-1 ; i++){
                if(a[i] > a[i+1]){
                    ok=false;
                }
            }
            if(ok){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
    }
}