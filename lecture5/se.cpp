#include <iostream>
#include <sstream>
using namespace std;
int main(){
    stringstream s;
    string a;
    int x=0;
    while(cin>>a){
        s<<a<<" ";
        x++;
    } cout<<x<<endl;
    for(int i=0; i<x; i++){
        s>>a;
        cout<<a<<" ";
    }
    //cout<<s.str();
    return 0;
}
//in.txt