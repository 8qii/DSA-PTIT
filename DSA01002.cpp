#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[10001];
        for(int i = 0 ; i < k ; i++ ){
            cin >> a[i];
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
        if (c == 0){
            for(int i = 0 ; i < k ; i++ ){
                cout << i + 1 << " ";
            }
        }
        else {
        for(int i = 0 ; i < k ; i++ ){
            cout << a[i] << " ";
        }
        }
        cout << endl;
    }
}