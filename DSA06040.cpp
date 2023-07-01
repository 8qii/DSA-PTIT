#include<bits/stdc++.h>
using namespace std;
void haq(){
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> a1(a);
    vector<int> b1(b);
    vector<int> c1(c);
    vector<int> ans;
    for(auto &i : a1) cin >> i;
    for(auto &i : b1) cin >> i;
    for(auto &i : c1) cin >> i;
    int x=0,y=0,z=0;
    while( x < a && y < b && z < c){
        if(a1[x] == b1[y] && a1[x] == c1[z]){
            ans.push_back(a1[x]);
            x++;
            y++;
            z++;
        }
        else if(a1[x] < b1[y]) x++;
        else if(b1[y] < c1[z]) y++;
        else z++;
    }
    if(ans.empty()) cout<< -1;
    else {
        for (auto i : ans) {
            cout << i << " ";
        }
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