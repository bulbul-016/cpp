#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    } 
    int l=0;   
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]<=-1){
                l=l+1;
            }
        } 
    } cout<<l;  
 return 0;
}