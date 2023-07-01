#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n,k;
    cin >> n >> k ;
    long long a[n];
    for(int i = 0 ; i< n ; i ++){
        cin >> a[i];
    }
    sort(a,a+n);
    long long sum = 0 ; 
    for(int i = 0 ; i < n  ; i ++){
        for(int j = i+1 ; j < n  ; j++){
            sum += lower_bound(a + j + 1, a + n , k - a[i] - a[j]) - &a[j+1] ;
        }
    }
    cout << sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
        cout << endl;
    }
}