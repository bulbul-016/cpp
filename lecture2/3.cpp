#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >>a;
    int sum=0;
    b=a/100;
    c=a%10;
    d=(a/10)%10;
    sum=b+c+d;
    cout<< sum << endl;
    
    return 0;
}