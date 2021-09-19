#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double f(int a, int b){
    double c=sqrt((a*a)+(b*b));
    return c;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<setprecision(4)<<f(a,b);
      return 0;
}