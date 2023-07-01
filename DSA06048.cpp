#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    int k = n-1;
    while(k > 0 && a[k-1] < a[k]){
        k--;
    }
    cout << k << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
    }
}