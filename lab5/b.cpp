#include <iostream>
#include <string>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    int u=0;
    int k=0;
    for(int i=0; i<x.size(); i++){
        if(int(x[i])>=97 && int(x[i])<=122){
            x[i]=char(int(x[i])-32);
        }
        cout<<x[i];
    }
    
    return 0;
}