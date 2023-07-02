#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int v,e;
        cin >> v >> e;
        int a[v+2][v+2];
        for(int i = 1 ; i <= v ; i ++){
            for(int j = 1 ; j <= v ; j++){
                a[i][j] =0;
            }
        }
        for(int i = 1 ; i <= e ; i ++){
            int x,y;
            cin >> x >> y;
            a[x][y]++;
            a[y][x]++;
        }
        for(int i = 1 ; i <= v ; i++){
            cout << i << ": ";
            for(int j = 1 ; j <= v ; j++ ){
                if(a[i][j] == 1) cout << j << " "; 
            }
            cout << endl;
        }
    }
}