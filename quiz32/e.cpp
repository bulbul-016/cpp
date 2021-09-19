#include <iostream>
using namespace std;
int f(int n){
    int c=0;
    int d=-1;
    if(n==1){ return 1;
    }else{
        for(int i=1; i<n; i++){
            if(n%i==0){
                c++;
                d=i;
            }
        }
        return c + f(d);
    }
}

int main(){
    int n; 
    cin>>n;
    cout<<f(n);
    return 0;
}
// 20 have 5 divisors: 10, 5, 4, 2, 1.
// F(20) = 5 + F(10) = 5 + (3 + F(5)) = 5 + (3 + (1 + F(1))) = 5 + 3 + 1 + 1 = 10
// 20
// 10