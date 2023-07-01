#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    long long a[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
        a[i]*= a[i];
    }
    sort(a,a+n);
    for(int i = 0 ; i < n ; i ++){
        for(int j = i+1 ; j < n ; j++){
            if(upper_bound(a + j + 1 , a + n , a[i] + a[j]) - lower_bound(a + j + 1 , a + n , a[i] + a[j])){
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