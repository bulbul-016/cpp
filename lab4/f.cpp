#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin>>a[i][j];
        }
    } 
    int best=-1111111;
    int r=-1;
    int c=-1;   
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(a[i][j]>best){
              best=a[i][j];
              r=i;
              c=j;
          }
        } 
    }   
    cout<<r+1<<" "<<c+1;
 return 0;
}