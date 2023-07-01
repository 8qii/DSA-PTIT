#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i ++ ){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        long long sum=0;
        vector<int> :: iterator it= a.begin();
        for(int i = 0 ; i < n ; i ++){
            it++;
            sum+= lower_bound(a.begin()+i+1,a.end(),k + a[i]) - it ;
            
        }
        cout << sum << endl;
    }
}