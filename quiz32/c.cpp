#include <iostream>
using namespace std;
void f(){
    int n;
    cin>>n;
    int cnt=0;
    if(n<10) return n;
    if(n>=10) return n%10;
    return f(n/10,cnt=cnt+n%10);
}
int main(){
    int n;
    cin>>n;
    int cnt=0;
    f(n,"");
    return 0;
}