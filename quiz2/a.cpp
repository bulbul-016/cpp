#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int h=0;
    for(int i=0; i<n; i++){
        if(a[i]<a[0] &&  a[i]+1!=a[i]){
          h++;
        } else break; 
    } cout<<h;
    int c=0;
    for(int i=1; i<n; i++){
        if((a[i]>a[0] && a[i]!=a[i]+1) || (a[i]>a[0] && a[i]-1!=a[i])){
          c++;
        } else break; 
    } cout<<c;

    return 0;
}