#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+10];
    for(int i = 0 ; i< n ; i ++){
        cin >> a[i];
    }
    sort(a,a+n);
    int max =a[0] *a[1];
    if(a[n-1] * a[n-2] > max) max =a[n-1] * a[n-2];
    if(a[0] * a[1] > max) max = a[0] * a[1];
    if(a[0] * a[1] * a[n-1] > max) max = a[0] * a[1] * a[n-1];
    if(a[n-1] * a[n-2] * a[n-3] >max) max =a[n-1] * a[n-2] * a[n-3];
    cout << max;
}