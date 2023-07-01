#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n+5];
    for(int i = 0 ; i < n ; i ++ ){
        cin >> a[i];
    }
    int b[n+5];
    int step=0;
    b[0]=a[0];
    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j > 0 && a[j] < a[j - 1]) {
            swap(a[j], a[j - 1]);
            j--;
        }
        cout << "Buoc " << i <<  ": ";
        for (int j = 0; j <= i; ++j) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}