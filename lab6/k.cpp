#include <iostream>
using namespace std;
string s;
void f(){
    getline(cin,s);
    int a=0;
    for(int i=0; i<s.size(); i++){
        a=a+int(s[i])-48;
    } cout<<a;
}
int main(){
    f();
    return 0;
}