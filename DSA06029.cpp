#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0 ; i < n ; i ++ ){
        cin >> a[i];
    }
    stack<int> st;
    int step=0;
    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
        for(int j = i ; j >= 0 ; j--){
            st.push(a[j]);
        }
    }
    for(int i = n-1 ; i >= 0 ; i--){
        cout << "Buoc " << i << ": ";
        for(int j = 0 ; j <= i ; j++){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}