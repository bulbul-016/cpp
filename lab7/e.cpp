#include <iostream>
using namespace std;
string f(long long n){
    if(n==1) return "Yes";
    if(n%2!=0) return "No";
    return f(n/2);
}
int main(){
    long long n;
    cin>>n;
    cout<<f(n);
    return 0;
}