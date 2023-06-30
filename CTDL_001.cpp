#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    int arr[t] ;
    for( int i = 0 ; i < t  ; i++){
        arr[i] = 0 ;
    }
    int d = 0;
    while( d != 1){
        
        int c=0;
        for( int i = 0 ; i < t  ; i++){
            if(arr[i] != arr[ t - i - 1]) c=1;
            }
        if (c == 0 ){
            for( int i = 0 ; i < t  ; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
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
}