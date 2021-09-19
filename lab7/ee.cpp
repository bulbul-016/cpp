#include <iostream>
using namespace std;
string f(int n){
    if(n==1) return "Yes";
    else if(n%2!=0) return "No";
     else return f(n/2);
}
int main(){
    long long s;
    cin>>s;
    cout<<f(s);
    return 0;
}