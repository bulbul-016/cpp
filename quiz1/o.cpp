#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    char w;
    cin >> a >>w>> b;
    if(w=='+'){
            cout <<a<<" + "<<b<<" = "<<a+b;
            return 0;
            }
    if(w=='-'){
           cout <<a<<" - "<<b<<" = "<<a-b;
            return 0;
            }
       if(w=='*'){
            cout <<a<<" * "<<b<<" = "<<a*b;
            return 0;
            }
        if(w=='/'){
            cout <<a<<" / "<<b<<" = "<<a/b;
            return 0;
            }
    return 0;
}