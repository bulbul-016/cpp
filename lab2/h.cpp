#include <iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    int t, even=0,odd=0;
    for(int i=0; i<w; i++){
        cin>>t;
        if(t%2!=1){
            even++;
        } else odd++;
    } cout<<even<<" "<<odd;
    return 0;
}