#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin >> n;
        int a[10001];
        set<int > s;
        int min=40000;
        int max =-40000;
        for(int i = 0 ; i < n ; i ++){
            
            int x;
            cin >> x;
            if(x > max) max = x;
            if(x < min ) min = x;
            s.insert(x);
        }
        int ans=max-min -s.size() +1;
        cout << ans << endl;
    }
}