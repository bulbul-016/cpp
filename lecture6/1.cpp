#include <iostream>
using namespace std;
int f(int x){
    int y=x*x;
    return y;
}
int main(){
    int a;
    cin>>a;
    cout<<f(a);
    return 0;
}