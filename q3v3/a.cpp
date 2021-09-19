#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][4];
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            if(a[j]==a[n-1] && a[j+1]==a[n-2]){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}