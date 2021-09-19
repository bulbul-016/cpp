#include <iostream>
using namespace std;
int main(){
    string s,x;
    cin>>s>>x;
    if(s.find(x)!=string::npos){
        cout<<"found";
    } else cout<<"not found";
    return 0;
}