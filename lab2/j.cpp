#include <iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    int t, z=0;
    for(int i=0; i<w; i++){
        cin>>t;
    } 
    for(int i=0; i<w; i++){
        if(t%10==0){
            z++;
            t=t/10;
        }
    }
     cout<<z;
    return 0;
}