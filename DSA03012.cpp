#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char,int> m;
        for(int i = 0 ; i < s.length() ;  i++){
            m[s[i]]++;
        }
        int max=0;
        for(auto i : m){
            if(i.second > max) max = i.second;
        }
        if(s.length() - max >= max-1) cout << 1 << endl;
        else cout << -1 << endl;
    }
}