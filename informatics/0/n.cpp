#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    b=45;
    cout<<9+((b*a)/60)<<" "<<((b*a)%60)+(a/2*5)+((a-1)/2*15);
    return 0;
}