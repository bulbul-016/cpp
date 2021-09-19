#include <iostream>
using namespace std;
int main(){
    int w;
    cin>>w;
    if(w>=1440){
        if((w-1440)>60){
            cout<<(w-1440)/60<<(w-1440)%60;
        } else if((w-1440)==60) cout<<1<<" "<<0;
        else cout<<0<<" "<<w-1440;
    } else cout<<w/60<<" "<<w%60;
    return 0;
}