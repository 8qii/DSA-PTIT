#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int arr[10]={1,2,5,10,20,50,100,200,500,1000};
    while(t--){
        int n;
        cin>>n;
        int count=0;
        int i=9;
        while(n>0){
            if(n>=arr[i]){
                count++;
                n-=arr[i];
        }
        else {
            i--;
        }
    }
    cout << count << endl;
}
}