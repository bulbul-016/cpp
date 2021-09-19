#include <iostream>
#include <cmath>
using namespace std;
void f(int b){
    while (b%2== 0){
        cout<<2<<" ";
        b=b/2;
    }
 
    for(int i=3; i<=b; i=i+2){
        while (b%i==0){
            cout<<i<<" ";
            b=b/i;
        }
    }
    if (b>2)
        cout <<b<< " ";
}
 
int main(){
    int b;
    cin >> b;
    f(b);
    return 0;
}
