#include <iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    int t, maxi=-1;
    for(int i=0; i<w; i++){
        cin>>t;
        if(maxi<t){
            maxi=t;
        }
    } cout<<maxi;
    return 0;
}