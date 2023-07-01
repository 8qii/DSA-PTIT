#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool check[n+1] ;
        for(int i = 2 ; i<= n ; i++){
            check[i] =true;
        }
    for(int i = 2 ; i<= n ; i++){
        if(check[i] == true){
            for(int j = 2*i ; j <= n ; j+= i){
                check[j] = false;
            }
        }
    }
        int find=0;
        for(int i = 2 ; i <= n ; i ++ ){
            if(check[i] == true && check[n-i] == true){
                cout << i << " " << n-i << endl;
                find =1;
                break;
            }
        }
        if(find == 0){
            cout << -1 << endl;
        }
    }
}