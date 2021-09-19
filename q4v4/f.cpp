#include <iostream>
using namespace std;
int main(){ 
    int n,m; cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>a[i][j];
        
    bool p=false;
    int x1,x2,y1,y2;
    
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--){
            x1=a[0][j];
            x2=a[n-1][j];
        }
        for(int j=0;j<m;j++){
            y1=a[0][j];
            y2=a[n-1][j];
        }
        if(x1==y1 && x2==y2) p=true;
    }
    if(p) cout<<"YES";
    else cout<<"NO";

    return 0;}
