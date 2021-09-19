#include <iostream>
using namespace std;
int main(){
    int a,b=0;
    cin>>a;
    if(a%2==0){
        b=((45*a)%60)+((a/2)*15)+a
    }
    int s=9+((45*a)/60);
    
    cout<<a<<" "<<s;
    return 0;
}