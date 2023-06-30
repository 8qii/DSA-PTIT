#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        int n,k;
        cin >> n >> k;
        int a[10001],b[10001];
        for(int i = 0 ; i < k ; i++ ){
            cin >> b[i];
        }
        for(int i = 0 ; i < k ; i++ ){
            a[i] = i+1;
        }
        int c=0;
        while(!c){
            count++;
            c=1;
            for(int i = 0 ; i < k ; i++){
                if(a[i] != b[i]) c=0;
            }
        for(int i = k - 1 ; i >= 0 ; i--){
            if(a[i] < n - k + i + 1 ){
                a[i]++;
                for(int j = i +1 ; j < k ; j++ ){
                    a[j] =a[i] + j - i;
                }
                break;
            }
        }
    }
    cout << count ;
    cout << endl;
    }
}