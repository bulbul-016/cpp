#include <iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    int a[w];
    for(int i=1; i<=w; i++){
        cin>>a[i];
    }
    for(int i=w; i>=1; i--){
        cout<<a[i]<<" ";
    } 
    return 0;
}