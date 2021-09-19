#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){ 
        cin>>a[i];
    } 
    int q=0; int b=0; int c=0; 
    for(int i=0; i<n; i++){ 
        if(a[i]%2==0) q++;
        if(a[i]%3==0) b++;
        if(a[i]%4==0) c++;
    } cout<<q<<" "<<b<<" "<<c;
    


    return 0;
}