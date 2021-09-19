#include <iostream>
using namespace std;
int f(int x, int z){
    int y=x+z;
    return y;
}
int main(){
    int x,z;
    cin>>x>>z;
    cout<<f(x,z);
    return 0;
}