#include <iostream>
#include <iomanip>
using namespace std;
double f(double a, double b){
    double c=(b*100)/a;
    return c;
}
int main(){
    double a,b;
    cin>>a>>b;
    cout<<f(a,b);
      return 0;
}