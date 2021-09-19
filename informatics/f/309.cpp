#include <iostream>
using namespace std;
bool f(bool x, bool y, bool z){
    if(x==y || x==z) return x;
    if(y==z || y==x) return y;
    return z;
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    cout<<f(x,y,z);
}