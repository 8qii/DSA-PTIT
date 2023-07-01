#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    queue<int> q;
    for(int i = 0 ; i < n ; i ++ ){
        int ok=0;
        for(int j = i + 1 ; j < n ; j++ ){
            if(a[j] > a[i]){
                q.push(a[j]);
                ok=1;
                break;
            }
        }
        if(!ok) q.push(-1);
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
int main(){
    int  t;
    cin >> t;
    while (t--){
        haq();
        cout << endl;
    }
}