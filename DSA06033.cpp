#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    pair<int,int> p[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> p[i].first;
    }
    for(int i = 0 ; i < n; i ++){
        p[i].second = i ;
    }
    sort(p,p + n);
    int ans=-1;
    int min=p[0].second;
    int temp=p[0].first;
    for(int i = 0 ; i < n ; i++){
        if(p[i].first > temp){
            ans = max(ans,p[i].second - min);
        }
        if(min > p[i].second){
            min = p[i].second;
            temp=p[i].first;
        }
    }
    cout << ans ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
        cout << endl;
    }
}