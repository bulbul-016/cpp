#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=2; i<n; i++){
        a[i]=i;
    }
    for(int i=2; i<n; i++){
        if(n%a[i]==0){
           cout<<"No"<<" "; break; 
        } else cout<<"Yes"<<" "; break; 
    } 
    return 0;
}