#include <iostream>
using namespace std;
string s;
void f(){
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if((s[i]!='A') && (s[i]!='E') && (s[i]!='I') && (s[i]!='O') && (s[i]!='U') && (s[i]!='a') && (s[i]!='e') && (s[i]!='i') && (s[i]!='o') && (s[i]!='u')){
            cout<<s[i];
            }
    } 
}
int main(){
    f();
    return 0;
}