#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        int b[n+5];
        for(int i = 0 ; i < n ; i ++){
            cin >> a[i];
            b[i]=a[i];
        }
        int m=n;
        stack<int> st;
        while(n>0){
            for(int i = n-1 ; i >=0 ; i--){
                st.push(b[i]);
            }
            n--;
            for(int i = 0 ; i < n ; i ++){
                b[i] = a[i] + a[i+1];
            }
            for(int i = 0 ; i < n ; i ++){
                a[i] =b[i];
            }
        }
        int k =1;
        while(k<=m){
            cout << "[";
            for(int i = 0 ; i < k ; i++){
                cout << st.top();
                st.pop();
                if(i!=k-1) cout << " ";
            }
            cout << "]" << " ";
            k++;
        }
        cout << endl;
    }
}