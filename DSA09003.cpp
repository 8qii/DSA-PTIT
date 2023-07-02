#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n+1][n+1] = {};
        for(int i = 1 ; i <= k ; i ++){
            int x,y;
            cin >> x >> y;
            a[x][y] = 1;
        }
        for(int i = 1 ; i <= n ; i++){
            cout << i << ": ";
            for(int j = 1 ; j <= n ; j++){
                if(a[i][j] == 1) cout << j << " ";
            }
            cout << endl;
        }
    }
}