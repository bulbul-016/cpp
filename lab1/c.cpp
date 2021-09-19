#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n%2;
    n=n/2;
    int b=n%2;
    n=n/2;
    int c=n%2;
    n=n/2;
    int d=n%2;
    n=n/2;
    cout<<a*8+4*b+2*c+1*d;
    return 0;
}