#include <iostream>
using namespace std;
int main(){
    int n;
    int s=0, a=10000;
    while(cin>>n){
        if(n==0){
            break;
        }
        if(a<n) s++;
        a=n;
    }
    cout<<s;
    return 0;
}