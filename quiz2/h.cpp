#include <iostream>

using namespace std;
int main(){
    string u;
    char x;
    cin>>x>>u;
    for(int i=0;i<u.size();i++){
        if(u[i]!=x) cout<<u[i];    
    }
    return 0; 
}