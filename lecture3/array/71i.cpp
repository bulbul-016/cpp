#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;++i){
        cin>>a[i];
    } 
    for(int i=0; i<n;++i){
        if(a[i]!=a[n-1]){
        a[i]=a[i+1];
        cout<<a[i]<<" ";
        } else cout<<a[0];
    }
    return 0;
}