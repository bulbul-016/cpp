#include <iostream>
using namespace std;
void f(){
    int n;
    cin>>n;
    int a[n];
    int c=0;
    for(int i=2; i<n; i++){
        if(n%(a[i])==0){
            c++;
        } 
    }
    if(c==0) cout<<"prime";
    else{cout<<"composite";}
}
int main(){
    f();
    return 0;
}