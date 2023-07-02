#include<bits/stdc++.h>
using namespace std;

int a[1000][1000];
int f[1000][1000];
int main(){
    int  t;
    cin >> t;
    while(t--){
        int m, n;
        cin >> m >> n;
        memset(f,9999999,sizeof(f));
        for(int i = 1 ; i <= m ; i++){
            for(int j = 1 ; j <= n ; j++){
                cin >> a[i][j];
            }
        }
        f[m][n] = 0;
        for(int i = m ; i >= 0 ; i--){
            for(int j = n ; j >= 0 ; j--){
                if(i == m && j == n) continue;
                f[i][j] = min({f[i][j] , f[i][j+a[i][j]] + 1 , f[i+a[i][j]][j] + 1});
            }
        }
        if(f[1][1] < 99999) cout << f[1][1];
        else cout << -1;
        cout << endl;
    }
}