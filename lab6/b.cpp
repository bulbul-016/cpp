#include <iostream>
#include <cmath>
using namespace std;
int n;
int a[10000];
int b[10000];
int c[10000];
void read(){
    cin>>n;

    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    for(int i=0; i<n; ++i){
        cin>>b[i];
    } 
    for(int i=0; i<n; ++i){
        c[i]=b[i]-a[i];
        if(c[i]<0){
            cout<<(-(c[i]))<<" ";
        }
         else cout<<c[i]<<" ";
    }
}
    int main(){
        
        read();
       
        return 0;
    }