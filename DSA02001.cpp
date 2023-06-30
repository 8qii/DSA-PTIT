#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        int b[n+5];
        for(int i = 0 ; i < n ; i ++){
            cin >> a[i];
            b[i]=a[i];
        }
        while(n>0){
            cout << "[";
            for(int i = 0 ; i < n ; i ++){
                cout << b[i];
                if(i!=n-1) cout << " ";
            }
            cout << "]";
            n--;
            for(int i = 0 ; i < n ; i ++){
                b[i] = a[i] + a[i+1];
            }
            for(int i = 0 ; i < n ; i ++){
                a[i] =b[i];
            }
            cout << endl;
        }
    }
}