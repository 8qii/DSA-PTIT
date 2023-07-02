#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    queue <int> q;
    while(t--){
        string s;
        cin >> s;
        if(s == "PUSH"){
            int k;
            cin >> k;
            q.push(k);
        }
        else if (s == "POP"){
            if(!q.empty()){
                q.pop();
            }
        }
        else if(s == "PRINTFRONT"){
            if(q.empty()){
                cout << "NONE" << endl;
            }
            else cout << q.front() << endl;
        }
    }
}