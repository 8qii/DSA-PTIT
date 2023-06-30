#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count = 0;
    cin >> n >> k;
    int a[n],b[n];
    for(int i = 0 ; i < n ; i ++ ){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++ ){
        b[i] = 0 ;
    }
    int c=n*n*2;
    while(c--){
        int sum = 0;
        for(int i = 0 ; i < n ; i ++ ){
            sum += a[i]*b[i];
        }
        if(sum == k){
            for(int i = 0 ; i < n ; i ++ ){
                if(a[i]*b[i]>0){
                    cout << a[i]*b[i] << " ";
                }
        }
        count ++;
        cout << endl;
        }
        for(int i = n-1 ; i >= 0 ; i--){
            if(b[i] == 0){
                b[i] =1;
                for(int j = i+1 ; j < n ; j++){
                    b[j] = 0;
                }
                break;
            }
        }
    }
    cout << count ;
}