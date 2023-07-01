#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n ;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(a[i] % 2 == 0){
            int mark = 0 ;
            for(int j = i+1 ; j < n ; j++){
                if(a[j] % 2 == 1){
                    mark = j ;
                    break;
                }
            }
            if(mark!= 0){
                for(int j = mark+1 ; j <n ; j++){
                    if(a[j] < a[i] && a[j]%2==0) ans++;
                }
            }
        }
    }
    cout << ans;
}
int main(){
    haq();
}