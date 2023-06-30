#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k ;
        cin >> n >> k;
        int arr[n] ;
        for( int i = 0 ; i < n  ; i++){
            arr[i] = 0 ;
        }
        int d = 0;
        int count1 = 0;
        while( !d){
            if(count1 == k){
                for(int i = 0 ; i < n ; i ++){
                    cout << arr[i];
                }
                cout << endl;
            }
            for( int i = n -1 ; i >= 0 ; i--){
                if(arr[i] == 0){
                    arr[i] = 1;
                    for(int j = i +1 ; j < n ; j ++ ){
                        arr[j] = 0 ;
                        d = 0 ;
                    }
                    break ;
                }
                d=1;
            }
            count1=0;
            for(int i = 0 ; i < n ; i ++){
                if(arr[i] == 1) count1++;
            }
        }
    }
}