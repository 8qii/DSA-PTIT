#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;
    string s;
    while(cin >> s){
        long long n;
        if(s == "push"){
            cin >> n;
            cin.ignore();
            st.push(n);
        }
        else if(s == "pop"){
            if(!st.empty()){
                st.pop();
            }
        }
        else if (s== "show"){
            if(!st.empty()){
                vector<int> v;
                while(!st.empty()){
                    v.push_back(st.top());
                    st.pop();
                }
                for(int i = v.size() -1 ; i >=0 ; i -- ){
                    cout << v[i] << " ";
                    st.push(v[i]);
                }
                
            }
            else{
                cout << "empty";
                }
            cout << endl;
        }
    }
    }