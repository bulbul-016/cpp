#include <iostream>
using namespace std;
int main(){
    int w,v;
    cin>>w>>v;
    if(w<=v) cout<<2;
    else if(v==2) cout<<w;
    else cout<<(w+v)/5;
    return 0;
}