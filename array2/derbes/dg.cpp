#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int cnt=0;
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            if(i==0 || j==m-1){
                int r=i,c=j;
                while(r<n && c>=0){
                    a[r][c]=cnt;
                    cnt++;
                    r++;
                    c--;
                }
            }
        }
    } 
    for(int i=0; i<n; ++i){
        for(int j=0; j<m; ++j){
            cout<<" "<<a[i][j];
        }
        cout<<endl;
    } 
    return 0;
}