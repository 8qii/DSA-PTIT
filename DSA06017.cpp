#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v;
        for(int i = 0 ;i < n ; i ++ ){
            int x;
            cin >> x;
            v.push_back(x);
        }
        for(int i = 0 ;i < k ; i ++ ){
            int x;
            cin >> x;
            v.push_back(x);
        }
        int a[v.size()];
        for(int i = 0 ;i < v.size() ; i ++ ){
            a[i] = v[i];
        }
        sort(a,a+v.size());
        for(int i = 0 ; i < v.size() ; i ++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}