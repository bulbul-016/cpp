#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; i++){
            cin>>a[i][j];
        }
    } 
    for(int i=1; i<=n; i++){ 
        int s=0;
        for(int j=1; j<=m; j++) {
            if(i==i && j!=j){
               s=s+a[i][j]; 
            }
        }cout<<s;
    } 
    return 0; 
}
//ccmthzw5