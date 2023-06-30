#include<bits/stdc++.h>
using namespace std;
string s(8,'0');
vector<string> v;
string tmp;
void check(string k){
    int a,b,c;
    a= stoi(k.substr(0,2));
    b= stoi(k.substr(2,2));
    c= stoi(k.substr(4));
    if(a > 0 && a <= 31 && b > 0 && b <= 12 && c >= 2000){
        tmp = k.substr(0,2) + '/' + k.substr(2,2) + '/' +k.substr(4);
        v.push_back(tmp);
    }
}
void solve(int j){
        for(int i = 0 ; i<=1 ; i++){
        if(i == 0){
            s[j] = '0';
        }
        else s[j] = '2';
        if(j == 7) check(s);
        else solve(j+1);
    }
}

void haq(){
    v.clear();
    solve(0);
    sort(v.begin(),v.end());
    for(auto i : v){
        cout << i << endl;
    }
}
int main(){
    haq();
}