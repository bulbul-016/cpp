#include <iostream>
using namespace std;
void f(){
    char n;
    cin>>n;
    if(n>='a' && n<='z') cout<<char(n-32);
    else cout<<n;
}
int main(){
    f();
    return 0;
}