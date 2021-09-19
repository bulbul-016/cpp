#include <iostream>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m; 
    int a[n];
    int ind;
    for(int i=0; i<n; i++){
        cin>>a[i];  
    }
    for(int i=0; i<n; i++){
       if(a[i]<=m){
           ind=i+1;    
       }
    }cout<<ind;
    return 0;
    }