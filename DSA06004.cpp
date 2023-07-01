#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        map<int ,int > mp;
        for(int i = 0 ; i < n ; i ++){
            int x;
            cin >> x;
            mp[x]++;
        }
        for(int i = 0 ; i < k ; i ++ ){
            int x;
            cin >> x;
            mp[x]++;
        }
        for(auto i:mp){
            if(i.second>0){
                cout << i.first << " ";
            }
        }
        cout << endl;
        for(auto i:mp){
            if(i.second >= 2){
                cout << i.first << " ";
            }
        }
        cout << endl;
    }
}