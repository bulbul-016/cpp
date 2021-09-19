#include <iostream>
using namespace std;
double f(double a, int n){
    if(n==0) return 1;
    return f(a,n-1)*a;
}
int main(){
    double a,n;
    cin>>a>>n;
    cout<<f(a,n);
}