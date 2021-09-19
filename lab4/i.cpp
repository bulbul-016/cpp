#include <iostream>
#include <cmath>
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
    int s;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            s=sqrt(a[i][j]);
           if(s*s==a[i][j]){
                a[i][j]=s; 
           }
           cout<<a[i][j]<<" ";
        } cout<<endl;
    }
    
 return 0;
}