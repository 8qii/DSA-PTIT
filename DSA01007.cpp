#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin >> k;
    while (k--){
    int t ;
    cin >> t;
    int arr[t] ;
    for( int i = 0 ; i < t  ; i++){
        arr[i] = 0 ;
    }
    int d = 0;
    while( d != 1){
        for(int i = 0 ; i < t ; i ++ ){
            if(arr[i] == 0) cout << "A";
            if(arr[i] == 1) cout << "B";
        }
        cout << " ";
        for( int i = t -1 ; i >= 0 ; i--){
            if(arr[i] == 0){
                arr[i] = 1;
                for(int j = i +1 ; j < t ; j ++ ){
                    arr[j] = 0 ;
                    d = 0 ;
                }
                break ;
            }
            d=1;
        }
    }
    cout << endl;
    }
}