#include <iostream>
using namespace std;
int main(){
int w,v,a,b;
cin>>w>>v>>a>>b;
int s,c,x;
s=(w*100+v)-a*b;
c=s/100;
x=s%100;
cout<<c<<" "<<x;
return 0;
}