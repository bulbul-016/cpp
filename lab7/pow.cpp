#include <iostream>
using namespace std;
int f(int n, int pow){
    if(n==0) return 1;
    else return f(n,pow-1)*n;
}
int main(){
    int s,p;
    cin>>s>>p;
    cout<<f(s,p);
    return 0;
}