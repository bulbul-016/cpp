#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int a[]={1,2,3};
    int l=sizeof(a)/sizeof(int);
   
    for(int i=0; i<l; i++){
        cout<<a[i]<<" ";
    } cout<<endl;
    sort(a,a+l);
    
    for(int i=l-1; i>=0; i--){
        cout<<a[i]<<" ";
    } cout<<endl;
    
     for(int i=0; i<l; i++){
        cout<<a[l-1-i]<<" ";
    }
    return 0;
}