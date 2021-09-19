#include <iostream>
using namespace std;
int f(int n, int c){
    if(n==1) return c;
    else{
        if(n%3==0) return f(n/3, c+1);
        else if((n-1)%3==0) return f((n-1)/3, c+2);
        else if(n-2!=0 and (n-2)%3==0) return f((n-2)/3, c+3);
        else if(n%2==0) return f(n/2, c+1);
        else if((n-1)%2==0) return f((n-1)/2, c+2);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<f(n,0);

    return 0;
}