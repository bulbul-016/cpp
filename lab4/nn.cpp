#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2; i<=n; i++){
        bool p=true;
        for(int j=2; j<i; j++){
        if(i%j==0){
        p=false;
        break;
        }
        } 
    if(p==true) cout<<i<<" is prime"<<endl;
    }
    
     return 0;
}