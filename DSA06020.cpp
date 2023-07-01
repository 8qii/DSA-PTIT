#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int find=-1;
        for(int i = 0 ; i < n ; i ++ ){
            int x;
            cin >> x;
            if(x == k ){
                find=1;
            }
        }
        cout << find << endl;
    }
}