#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[30];
        cin>>n;
        for(int i=0;i<n;i++){
                cin >> arr[i];
        }
        sort(arr,arr+n);
        long long sumc = 0;
        long long suml = 0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                sumc = sumc*10 + arr[i];
            }
            else{
                suml = suml*10 + arr[i];
        }
        }
        long long sum = sumc + suml;
        cout << sum << endl;
}
}
