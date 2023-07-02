#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        queue<int> q;
        int k;
        cin >> k;
        while(k--){
            int x;
            cin >> x;
            if(x == 1){
                cout << q.size() << endl;
            }
            else if(x == 2){
                if(q.empty()){
                    cout << "YES";
                }
                else cout << "NO";
                cout << endl;
            }
            else if(x == 3){
                int a;
                cin >> a;
                q.push(a);
            }
            else if(x == 4){
                if(!q.empty()){
                    q.pop();
                }
            }
            else if(x == 5){
                if(q.empty()){
                    cout << "-1" << endl;
                }
                else cout << q.front() << endl;
            }
            else if(x == 6){
                if(q.empty()){
                    cout << "-1" << endl;
                }
                else cout << q.back() << endl;
            }
        }
    }
}