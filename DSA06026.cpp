#include<bits/stdc++.h>
using namespace std;
void haq(){
    int n;
    cin >> n;
    int a[n+1];
    for(int  i = 0 ; i < n ; i ++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n ; i ++){
        bool ok =true;
        for(int j = 0 ; j < n-1 ;j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
                ok=false;
            }
        }
        if(ok == true ) return ;
        cout << "Buoc " << i+1 <<": " ;
        for(int k = 0 ; k < n ; k++)
        {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}
int main(){
    haq();

}