#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second < b.second;
}

void sx(){
    int n ;
    cin >> n;
    pair<int,int> a[n];
    for(int i = 0 ; i< n ; i ++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a,a+n,cmp);
    int count =1;
    int now = a[0].second;
    for(int i = 0 ; i < n ; i ++){
        if(a[i].first >= now) {
            count++;
            now=a[i].second;
        }
    }
    cout << count << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        sx();
    }
}