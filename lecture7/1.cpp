#include <iostream>
using namespace std;
int f(int n){
    if(n==1) return 1;
    return f(n-1)+n;
}
int ff(int n){
    int s=0;
    for(int i=1; i<=n; ++i){
        s=s+i;
    }
    return s;
}
int fff(int n){
    return ((n+1)*n)/2; //арифметическая прогрессия
}
int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl<<ff(n)<<endl<<fff(n);
    
    return 0;
}