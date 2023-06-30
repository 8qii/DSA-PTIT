#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr,arr+n);
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    vector<int> v;
    for(set<int>::iterator it=s.begin(); it != s.end(); it++){
        v.push_back(*it);
    }
    int a[10001];
    for(int i=1;i<v.size()+1;i++){
        a[i] = v[i-1];
    }
    int b[10001];
    for(int i = 1 ; i  <= k ; i ++ ){
        b[i] = i;
    }
    int ok =1;
    while(ok){
        ok =0;
        for(int i = 1 ; i <= k ; i++){
            cout << a[b[i]] << " ";
        }
        for(int i = k ; i >=1 ; i--){
            if(b[i] < v.size() - k + i){
                b[i] ++;
                for(int j = i+1 ; j <= k ; j++){
                    b[j] = b[i] +j - i;
                }ok=1;
                break;
            }
        }
        cout << endl;
    }
    
}
