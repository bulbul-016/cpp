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
     for(int i=0; i<n; i++){
         int mn=999;
        for(int j=0; j<n; j++){
            if(a[i][j]<mn) mn=a[i][j];
        }
        cout<<mn<<endl;
    }
    return 0;
}