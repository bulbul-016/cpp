#include <iostream>
using namespace std;
string s;
void f(){
    getline(cin,s);
    int a=0;
    for(int i=0; i<s.size(); i++){
        a=a+int(s[i])-48;
    } if(a%(int(s[s.size()-1])-48)==0){
        cout<<"Yes";
    } else cout<<"No";
}
int main(){
    f();
    return 0;
}