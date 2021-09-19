#include <iostream>
using namespace std;
int f(long long k,int w){
    if(w==1) return 0;
    else if(w==2) return 1;
    return (f(k,w-2)+k*f(k,w-1))%10;
}
int main(){
    long long k;
    int w;
    cin>>k>>w;
    cout<<f(k,w);
    return 0;
}
