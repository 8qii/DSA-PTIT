#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[10001];
        int b[10001];
        for(int i = 0 ; i < n ; i ++ ){
            cin >> a[i];
            b[i] = abs(a[i]-k);
        }
        sort(b,b+n);
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < n ; j++){
                if(abs(a[j]-k) == b[i]){
                    cout << a[j] << " ";
                    a[j] =100000;
                }
        }
}
cout  << endl;
}
}