#include <iostream>
using namespace std;
void f(){
    int n;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; ++i){
        cin>>a[i];
    }
    for(int i=n; i>0; --i){
        cout<<a[i]<<" ";
    }
}
int main(){
    f();
    return 0;
}