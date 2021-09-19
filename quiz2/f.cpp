#include <iostream>
using namespace std;
int main(){
    int v,w,p;
    cin>>v>>w>>p;
    int a[v][w];
    for(int i=0; i<v;i++){
        for(int j=0;j<w;j++){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=0; i<v;i++){
        for(int j=0;j<w;j++){
            if(a[i][j]==p){
                cnt++;
                break;
            }
            
        }
    }
    cout<<cnt;

    return 0;
}