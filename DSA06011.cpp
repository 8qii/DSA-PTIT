#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> v;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                v.push_back(a[j] + a[i]);
            }
        }
        int min=abs(v[0]);
        int l=0;
        for(int i = 0 ; i < v.size(); i++){
            if(abs(v[i]) < min){
                min = abs(v[i]);
                l=i;
            }
        }
        cout << v[l] << endl;
}
}