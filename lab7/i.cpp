#include <iostream>
using namespace std;
int f(int n){
    int c;
    cin>>c;
    if(c==0) return n;
    return f(c)+n;
}
int main(){
    cout<<f(0);
    return 0;
}