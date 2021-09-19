#include <iostream>
#include <string>
using namespace std;
int main(){
    string x;
    getline(cin,x);
    int u=0;
    int k=0;
    for(int i=0; i<x.size(); i++){
        if(int(x[i])>=65 && int(x[i])<=90){
            u++;
        }
        else k++;
    }
    cout<<k<<" "<<u;
    return 0;
}