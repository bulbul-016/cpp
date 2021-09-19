#include <iostream>
using namespace std;
int f(int x, int y){
    if(x-y<0) return abs(x-y);
    else return x-y;
}
int main(){
    int n,m; cin>>n>>m;
    cout<<f(n,m);
    return 0;
}