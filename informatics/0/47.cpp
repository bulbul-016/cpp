#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n/3600<<":";
    if(n%3600>60) cout<<(n%3600)/60<<":";
    else cout<<00<<":";
    if((n%3600)%60>=1) cout<<(n%3600)%60;
    else cout<<00;
    return 0;
}