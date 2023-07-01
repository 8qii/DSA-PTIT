#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    int a[n+1];
    stack<int> st;
    for(int  i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    int step_count =0;
    for(int i = 0 ; i < n ; i ++){
        bool ok =true;
        for(int j = 0 ; j < n-1 ;j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
                ok=false;
            }
        }
        if(!ok) step_count ++ ;
        if(ok == true ) break ;
        for(int j = n-1 ; j >= 0 ; j--){
            st.push(a[j]);
        }
        
    }
    for(int i = step_count ; i >= 1 ; i--){
        cout << "Buoc " << i << ": ";
        for(int j = 0 ; j < n ; j++){
            cout << st.top() << " ";
            st.pop();
        }
        cout << endl;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
    }
}