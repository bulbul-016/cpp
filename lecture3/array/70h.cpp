#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;++i){
        cin>>a[i];
    } 
    int m=0;
    for(int i=0; i<n;++i){
        if(i==m){
            a[m]=a[1];
            a[1]=a[m];
        }
        cout<<a[i]<<" ";
    }
    return 0;
}