#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        int arr[n] ;
        for( int i = 0 ; i < n  ; i++){
            arr[i] = 0 ;
        }
        int d = 0;
        int check = 0;
        while( !d){
            if(check == 1){
                for(int i = 0 ; i < n ; i ++){
                    if(arr[i]==1) cout << "H";
                    if(arr[i]==0) cout << "A";
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
            check =1;
            for(int i= 0 ; i < n ; i++){
                if(arr[0] == 0 || arr[n-1] == 1) check = 0;
            }
            for(int i= 0 ; i < n-1 ; i++){
                if(arr[i] == 1 && arr[i+1] == 1) check =0;
            }
        }
    }
}