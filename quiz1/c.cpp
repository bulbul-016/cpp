#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,c,d;
cin >>a>>b>>c>>d;
double n=sqrt((c-a)*(c-a) + (d-b)*(d-b));
printf("%10.10f" , n);
return 0;

}