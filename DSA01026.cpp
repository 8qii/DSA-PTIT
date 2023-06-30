#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int  i = 0 ; i < n ; i ++ ){
        arr[i]=0;
    }
    int d = 0;
    int check=0;
    while( d != 1){
        if(check == 1){
            for(int i = 0 ; i < n ; i ++ ){
                if(arr[i] == 0) cout << 6;
                if(arr[i] == 1) cout << 8;
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
        if(arr[0] == 0 || arr[n-1] == 1) check =0;
        if( n < 6) check =0;
        for(int i = 0 ; i < n-1 ; i ++){
            if(arr[i] ==1 && arr[i+1] == 1) check=0;
        }
        for(int i = 0 ; i < n-3 ; i ++){
            if(arr[i] == 0 && arr[i+1] == 0 && arr[i+2] == 0 && arr[i+3] == 0) check=0;
        }
}
}