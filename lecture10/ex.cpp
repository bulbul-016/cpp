#include <iostream>
#include <algorithm>
using namespace std;
int c(int x){
    int r=0;
    for(int i=1; i<=x; i++){
        if(x % i ==0){
            r++;
        }
    }
    return r;
}

bool f(int a1, int a2){
    int c1=c(a1);
    int c2=c(a2);
    return c1<c2;
}
int main(){
    int a[]={1,16,12,3,9,19};
    int l=sizeof(a)/sizeof(int);
    sort(a, a+l, f);
    for(int i=0; i<l; i++){
        cout<<a[i]<<" "<<c(a[i])<<endl;
    }
    return 0;
}