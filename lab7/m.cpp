#include <iostream>
using namespace std;
void f(int n, int i){
    if(i==n+1) return;
    else{
        cout<<i<<" ";
        return f(n,i+1);
    }
}
int main(){
    int n;
    cin>>n;
    f(n,1);
    return 0;
}