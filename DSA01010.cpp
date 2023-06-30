#include<bits/stdc++.h>
using namespace std;

void hvdq(){
    int n , k ;
    cin >> n >> k;
    int a[50];
    set<int> s;
    for(int i = 1 ; i <= k ; i ++){
        cin >> a[i];
        s.insert(a[i]);
    }
    int i = k;
    while(i>0 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        cout << k ;
        return;
    }
    else {
        a[i]++;
        for(int j = i+1 ; j <= k ; j++){
            a[j] =a[i] + j - i;
        }
    }
    for(int i = 1 ; i <= k ; i ++){
        s.insert(a[i]);
    }
    int res = s.size() - k;
    cout << res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        hvdq();
        cout << endl;;
    }
}