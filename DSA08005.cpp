#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    queue<long long> q;
    stack<int> st;
    while(n>0){
        st.push(n%2);
        n/=2;
    }
    long long ne=0;
    while(!st.empty()){
        ne=ne*10 +st.top();
        st.pop();
    }
    q.push(1);
    vector<long long> res;
    long long k;
    while(1){
        k = q.front()*10 + 0;
        if(k>ne) break;
        q.push(k);
        k=q.front()*10 + 1;
        if(k>ne) break;
        q.push(k);
        res.push_back(q.front());
        q.pop();
    }
    while(!q.empty()){
        res.push_back(q.front());
        q.pop();
    }
    for(int i = 0 ; i < res.size() ; i++){
        cout << res[i] << " ";
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
        cout << endl;
    }
}