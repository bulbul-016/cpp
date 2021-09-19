#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(((a/1000+(a/100)%10)-((a/10)%10+a%10)==0 && b==1) || (((a/1000+(a/100)%10)-((a/10)%10+a%10)!=0 && b!=1))) cout<<"YES";
    else cout<<"NO";
    return 0;
}