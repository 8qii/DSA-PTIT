#include<bits/stdc++.h>
using namespace std;
void haq(){
    string s;
    getline(cin,s);
    stack<int> st;
    for(int i = 0 ; i < s.length() ; i++ ){
        if(s[i] != ')'){
            st.push(s[i]);
        }
        else{
            bool ok =false;
            while(!st.empty()){
                char x = st.top();
                st.pop();
                if(x == '+' || x == '-' ||x == '*' || x == '/'){
                    ok=true;
                }
                if(x == '(') break;
            }
            if(!ok){
                cout << "Yes" ;
                return ;
            }
        }
    }
    cout << "No";
}
int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        haq();
        cout <<endl;
    }
}