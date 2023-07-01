#include<bits/stdc++.h>
using namespace std;
void sx(){
    int n;
    cin >> n;
    vector<int > a;
    vector<int > b;
    for(int i = 0 ; i < n ; i++ ){
        int x;
        cin >> x;
        if(i%2== 0) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(),b.end(),greater<int>());
    int q=0,w=0;
    for(int i = 0 ; i < n ; i ++){
        if(i%2==0) {
            cout << a[q] << " ";
            q++;
        }
        else {
            cout << b[w] << " ";
            w++;
        }
    }
}
int main(){
    sx();
}