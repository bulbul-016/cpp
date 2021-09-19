#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    } cout<<"coordinates of min elements:"<<endl;
    int s=0;
    for(int j=1; j<=m; j++){ 
        int m=999;
        int r=-1;
        int c=-1;
        for(int i=1; i<=n; i++) {
            if(a[i][j]<m){
                m=a[i][j];
                r=i; c=j;   
            }
        } s=s+m;
        cout<<r<<";"<<c<<endl;
    } cout<<"Their sum:"<<endl<<s;
    return 0;
}