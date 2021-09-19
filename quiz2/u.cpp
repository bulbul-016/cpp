#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=1; i<=n; i++){
       if(a[1]>a[i] && ((a[i]!=a[i]+1) || (a[i]-1!=a[i]))){
           c++;
       } else break;
     } cout<<c;
    return 0;
}