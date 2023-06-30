#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 +7;
long long big(int n , int k){
    if(k == 0 ) return 1;
    if(k == 1) return n;
    long long x = big(n,k/2);
    long long y = (x*x)%mod;
    if(k%2 == 0 ) return y;
    else return (n*y)%mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        long long b=  big(n,k);
        cout << b << endl;
    }
}