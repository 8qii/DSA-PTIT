#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> m;
        int ok=0;
        for(int i = 0 ; i < n ; i ++){
            int x;
            cin >> x;
            m[x]++;
        }
        for(auto i : m){
            if(i.second > n/2){
                cout << i.first << endl;
                ok =1;
            }
        }
        if(ok==0) cout << "NO" << endl;
    }
}