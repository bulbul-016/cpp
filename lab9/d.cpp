#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n; cin>>n; int a[n]; int m; cin>>m;
    for(int i=0; i<n; i++){
        cin>>a[i];
    } int c=0;
     for(int i=0; i<n; i++){
        if(a[i]==m) c++;
    } cout<<c;
    return 0;
}