#include<bits/stdc++.h>
using namespace std;
void Hv(){
    int n;
    cin >> n;
    vector<int> a;
    int b[n+1];
    for(int i = 0 ; i < n ; i ++){
        a.push_back(i+1);
    }
    for(int i = 0 ; i < n ; i ++ ){
        cin >> b[i];
    }
    int count =1;
    while(1){
        int ok=0;
        for(int i = 0 ; i < n ; i ++ ){
            if(a[i]!= b[i]) ok=1;
        }
        if(ok == 0) {
            cout << count << endl;
            return ;
        }
        count ++;
        int k,l;
        for(k = n -2 ; k >= 0 ; k--){
            if(a[k] < a[k+1]) break;
        }
        if(k < 0) return ;
        for(l = n-1 ; l >k ; l --){
            if(a[l] > a[k]) break;
        }
        swap(a[l],a[k]);
        for(int i = k+1 , j = n-1 ; i< j ; i++ , j--){
            swap(a[i],a[j]);
        }
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        Hv();
    }
}