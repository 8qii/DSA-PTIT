#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int a[n+10];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        set<int> s;
        for(int i=0;i<n;i++){
            while(a[i] > 0){
                s.insert(a[i]%10);
                a[i] = a[i] / 10;
            }
        }
        for(set<int>::iterator it = s.begin();it != s.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
}