#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        int k=0,m=0;
        int a[10001];
        for(int i = 0 ; i < n ;i ++){
            cin >> a[i];
        }
        for(int i = n-1 ; i >= 1 ; i--){
            if(a[i-1] < a[i]){
                k = i-1;
                break;
            }
        }
        int max =0;
        for(int i = k +1 ; i < n ; i ++ ){
            if(a[i] > max){
                max= a[i];
                m=i;
            }
        }
        swap(a[k],a[m]);
        for(int i = k +1 ; i < (n+k+1)/2 ; i ++ ){
            swap(a[i],a[n-i-1]);
        }
        if(k==0){
            for(int i = 0 ; i < n ; i ++ ){
                cout << i+1 << " ";
            }
        }
        else {
        for(int i = 0 ; i < n ; i ++ ){
            cout << a[i] << " ";
        }
        }
        cout << endl;
    }
}