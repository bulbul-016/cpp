#include <iostream>
using namespace std;
int main(){
int w;
cin >>w;
int s=0;
s=w/100+(w/10)%10+w%10;
cout<<s;
return 0;
}