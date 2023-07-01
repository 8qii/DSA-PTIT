#include<bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n+5];
        int step=1;
        stack<int> s;
        for(int i = 0 ; i < n ; i ++ ){
            cin >> a[i];
        }
        for(int i = 0 ; i < n-1 ; i++){
            for(int j = i+1 ; j< n; j++){
                if(a[i]>a[j]){
                    swap(a[i],a[j]);
                }
            }
            step++;
            for(int k = n-1 ; k >= 0 ; k--){
                s.push(a[k]);
            }
        }
        while(!s.empty()){
            cout << "Buoc " << step -1 <<": ";
            for(int i = 0 ; i < n ; i++){
                cout << s.top() << " ";
                s.pop();
            }
            step--;
            cout << endl;
        }
    }
}