#include <iostream>
#include <cmath>
using namespace std;
int  f(int a, int b){
    if(a>0){
        b=a;
    } else b=-a;
    return b;
}
int main(){
    int a,b;
    cin>>a;
    cout<<f(a,b);
      return 0;
}