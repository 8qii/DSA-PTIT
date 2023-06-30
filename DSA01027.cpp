#include<bits/stdc++.h>
using namespace std;
void in(vector<int> a){
    for(int i = 0 ; i < a.size() ; i ++){
        cout << a[i] << " ";
    }
}

void Hv(){
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0 ; i < n ; i ++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    while(1){
        in(a);
        cout << endl;
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
    Hv();
}