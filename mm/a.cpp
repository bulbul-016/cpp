#include <iostream>
using namespace std;
int main(){
    int n,m; cin>>n>>m; char a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j]=' ';
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0) a[i][j]='+';
            else if(i==0 && j==n-1) a[i][j]='+';
            else if(i==0 && j!=n-1) a[i][j]='-';
            else if(i==m-1 && j==0) a[i][j]='+';
            else if(i==m-1 && j==n-1) a[i][j]='+';
            else if(i==m-1 && j!=0) a[i][j]='-';
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}