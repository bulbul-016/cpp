#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;++i){
        cin>>a[i];
    }
    int b=0;
    for(int i=1; i<n; i++){
        if(a[i+1]>a[i]){
          b++;  
        }
    } cout<<b;
    return 0;
}