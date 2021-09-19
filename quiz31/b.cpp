#include <iostream>
using namespace std;
void f(int n, int i ){
    if (n==1) return;
    if(n%i==0) return f(n/i);
    return f(n,i+1)
}

int main (){
    int n;
    cin>>n;
    cout<<f(n,2);
}