#include <iostream>
using namespace std;
int f(int a, int b, int c, int d){
      return min(a, min(b, min(c, d)));
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<f(a,b,c,d);
}