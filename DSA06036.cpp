#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i = 0 ; i < n ; i ++ ){
        cin >> a[i];
    }sort(a,a+n);
    for(int i = 0 ; i < n-2 ; i++){
        for(int j = i+1 ;j < n-1 ; j++){
            if(upper_bound(a + j + 1 , a + n , k - a[i] - a[j]) - lower_bound(a + j + 1 , a + n , k - a[i] - a[j])){
                cout << "YES";
                return ;
            }
        }
    }
    cout << "NO";
}
int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
        cout << endl;
    }
}