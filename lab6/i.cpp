#include <iostream>
using namespace std;
string s;
void f(){
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(i%2==0){
            s[i]=char(int(s[i])-32);
        } cout<<s[i];
    } 
    cout<<endl;
}
int main(){
    f();
}