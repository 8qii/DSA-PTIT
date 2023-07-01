#include<bits/stdc++.h>
using namespace std;
void sx(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i ++ ){
        cin >> a[i];
    }
    int cnt=0;
    while(1){
        int min=a[cnt];
        int luu=cnt;
        for(int i = cnt ; i < n ; i ++){
            if(a[i]<min) {
                min =a[i];
                luu =i;
            }
        }
        swap(a[cnt],a[luu]);
        cnt++;
        if(cnt == n) return ;
        cout << "Buoc " << cnt <<": " ;
        for(int i = 0 ; i < n ; i ++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}
int main(){
    sx();
}