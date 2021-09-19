#include <iostream>
using namespace std;
int f(int a, int n){
   // if(a==1) return 1;
    if(n==0) return 1;
    //if(n==1) return a;
    return f(a,n-1)*a;
}
int main(){
    int a,n;
    cin>>a>>n;
    cout<<f(a,n);
    return 0;
}