#include <iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    int t, s=0;
    for(int i=0; i<w; i++){
        cin>>t;
        if(t%7==0){
            s++;
        }
    } cout<<s;
    return 0;
}