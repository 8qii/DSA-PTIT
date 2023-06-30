#include<bits/stdc++.h>
using namespace std;

vector<bool> vs(10);
string a,b;
int n;

void hvdq(int i){
    if(i == n){
        cout << b << " ";
    }
    else{
    for(int j = 0 ; j < n ; j++){
        if(vs[j] == false){
            b[i] = a[j];
            vs[j] = true;
            hvdq(i+1);
            vs[j] = false;
        }
    }
    }
}

void haq(){
    cin >> a;
    n= a.length();
    b.resize(n);
    vs.resize(n,false);
    hvdq(0);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        haq();
        cout << endl;
    }
}