#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[10001];
        for(int i = 0 ; i < k ; i++ ){
            a[i] = i+1;
        }
        for(int i = 1 ; i <= k ; i++){
            char p=i+64;
            cout << p;
        }
        cout << endl;
        int c=0;
        while(!c){
        c=1;
        for(int i = k - 1 ; i >= 0 ; i--){
            if(a[i] < n - k + i + 1 ){
                a[i]++;
                for(int j = i +1 ; j < k ; j++ ){
                    a[j] =a[i] + j - i;
                }
                c=0;
                break;
            }
        }
        if(c==0){
        for(int i = 0 ; i < k ; i++ ){
            char p=a[i]+64;
            cout << p;
        }
        cout << endl;;
        }
    }
    cout << endl;
    }
}