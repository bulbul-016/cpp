#include <iostream>
using namespace std;
int f(int a, int b){
    int y=a+b;
    return y;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<f(a,b);
    return 0;
}