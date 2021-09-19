#include <iostream>
using namespace std;
int f(int a, int b, int c, int d){
    return max(a ,max(b, max(c, d)));
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<f(a,b,c,d);
      return 0;
}