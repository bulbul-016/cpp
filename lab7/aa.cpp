#include <iostream>
using namespace std;
int f(int n){
    if(n==0) return 1;
    return f(n-1)*2;
}
int main(){
    int s;
    cin>>s;
    cout<<f(s);
    return 0;
}