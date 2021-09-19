#include <iostream>
using namespace std;
int main(){
    int n; cin>>n; int g=0;
    if(n<=6) cout<<n*30;
    if(n>=6){
        g=n-6;
        cout<<180-g*30;
    }
    return 0;
}
