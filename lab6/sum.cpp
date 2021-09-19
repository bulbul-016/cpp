#include <iostream>
#include <cmath>
using namespace std;
int a[101];
int b[101];
int n;

void read(){
    cin>>n;
    int x;
    
    for(int i=1; i<=100; ++i){
        a[i]=0;
        b[i]=0;
    }
    for(int i=0; i<n; ++i){
        cin>>x;
        a[x]++;
    }
    for(int i=0; i<n; ++i){
        cin>>x;
        b[x]++;
    }
    for(int i=1; i<=100; ++i){
        cout<<a[i]<<" ";
    } 
    cout<<endl;
    for(int i=1; i<=100; ++i){
        cout<<b[i]<<" ";
    }
}
    int main(){
        
        read();
       
        return 0;
    }
