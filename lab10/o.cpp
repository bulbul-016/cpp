#include <iostream>
#include <vector>
using namespace std;
string f(int n){
    if(n==1) return "1";
    if(n%2==0) return f(n/2)+'0';
    return f(n/2)+'1';
}
void ff(int n){
    
}
int main(){
    int n; cin>>n;
    
}