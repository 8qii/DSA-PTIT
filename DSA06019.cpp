#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a , pair<int,int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int,int> mp;
        for(int i = 0 ; i < n ; i ++ ){
            int x;
            cin >> x;
            mp[x]++;
        }
        pair<int,int> a[10000];
        int j = 0;
        for(auto i : mp){
            if(i.second >=1 ){
                a[j].first=i.first;
                a[j].second=i.second;
                j++;
            }
        }
        sort(a,a+j,cmp);
        for(int i = 0 ; i < j ; i++){
            for(int l = 0 ; l < a[i].second ; l++){
                cout << a[i].first << " ";
            }
        }
        cout << endl;
    }
}