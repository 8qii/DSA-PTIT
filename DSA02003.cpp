#include<bits/stdc++.h>
using namespace std;

int  n ;
int a[11][11];
bool print;
void solve(int i , int j ,string s){
    if(i == n && j == n) {
        print = true;
        cout << s << " ";
        return ;
    }
    if(a[1][1] == 0 || a[n][n] == 0){
        print = true;
        cout << -1 ;
        return;
    }
    if(a[i+1][j] == 1) solve(i+1,j,s+"D");
    if(a[i][j+1] == 1) solve(i,j+1,s+"R");
}
void haq(){
    cin >> n;
    print= false;
    for(int  i = 1 ; i <= n ; i ++){
        for(int j = 1 ; j <= n ; j ++){
            cin >> a[i][j];
        }
    }
    solve(1,1,"");
    if(!print) cout << -1;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
        cout << endl;
    }
}