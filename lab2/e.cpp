#include <iostream>
using namespace std;
int main(){
    int w,v;
    cin>>w>>v;
    if(w==v) cout<<0;
    else if(w>v) cout<<1;
    else cout<<2;
    return 0;
}