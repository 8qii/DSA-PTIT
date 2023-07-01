#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s,d;
        getline(cin,s);
        stringstream ss(s);
        stack<string> st;
        while(ss >> d){
            st.push(d);
        }
        while(!st.empty()){
            cout << st.top() <<  " ";
            st.pop();
        }
        cout << endl;
    }
}