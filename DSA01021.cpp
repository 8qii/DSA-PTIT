#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[10001];
        int b[10001];
        map<int,int> m;
        for(int i = 0 ; i < k ; i++ ){
            cin >> a[i];
            m[a[i]] ++;
        }
        int c=0;
        for(int i = k - 1 ; i >= 0 ; i--){
            if(a[i] < n - k + i + 1 ){
                a[i]++;
                for(int j = i +1 ; j < k ; j++ ){
                    a[j] =a[i] + j - i;
                }
                c =1;
                break;
            }
        }
        int count=0;
        for(int i = 0 ; i < k ; i++ ){
            if(m[a[i]] == 0) count++;
        }
        if (c == 0){
            cout << k;
        }
        else {
            cout << count ;
        }
        cout << endl;
    }
}