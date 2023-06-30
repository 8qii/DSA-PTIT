#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(k>n-k){
            k=n-k;
        }
        sort(a,a+n);
        int sum1 =0;
        int sum2 =0;
        for(int i=0;i<k;i++){
            sum1 += a[i];
        }
        for(int i = k ; i < n; i++){
            sum2 += a[i];
        }
        cout << sum2 -sum1 << endl;
    }
}