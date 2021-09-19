#include <iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    int a[w];
    for(int i=1; i<=w; i++){
        cin>>a[i];
    }
    int s=-999999999;
    int x=-1;
    for(int i=1; i<=w; i++){
        if(s<a[i]){
            s=a[i];
            x=i;
        }
    } cout<<x;
    return 0;
}