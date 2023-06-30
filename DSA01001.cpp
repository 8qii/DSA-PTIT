#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    string a;
    cin >> a;
    int n=a.length();
    int f=0;
    for(int i = n - 1 ; i >= 0 ; i--){
            if(a[i] == '0'){
                a[i] = '1';
                for(int j = i+1 ; j < n ; j++){
                    a[j] = '0';
                }
                f=1;
                break;
            }
        }
    if(f == 1){
        for(int i = 0 ; i < n ; i ++ ){
            cout << a[i];
        }
    }
    else {
        for(int i = 0 ; i < n ; i ++ ){
            cout << "0";
        }
    }
    cout << endl;
    }
    
}