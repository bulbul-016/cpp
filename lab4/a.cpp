#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    } 
    int m=-11111;   
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]>m){
                m=a[i][j];
            }
        } 
    } cout<<m;  
 return 0;
}