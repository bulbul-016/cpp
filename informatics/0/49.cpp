#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int s=-999;
    if(a>s){
        s=a;
        a=b;
    } cout<<a<<" "<<s;
    return 0;
}