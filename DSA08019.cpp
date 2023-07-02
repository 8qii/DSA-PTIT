#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    queue<string> q;
    stack<int> st;
    q.push("6");
    q.push("8");
    vector<string> res;
    while(1){
        string k = q.front() + "6";
        if(k.length() > n) break;
        q.push(k);
        k = q.front() + "8";
        q.push(k);
        res.push_back(q.front());
        q.pop();
    }
    while(!q.empty()){
        res.push_back(q.front());
        q.pop();
    }
    cout << res.size() << endl ;
    for(int i = res.size() -1 ; i >= 0 ; i--){
        cout << res[i] << " ";
    }
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
    }
}