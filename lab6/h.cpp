#include <iostream>
using namespace std;
string s;
void f(){
    getline(cin,s);
    int a=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]%2==0){
            a++;
        }
    } if(a==s.size()) cout<<"Valid";
    else cout<<"Not valid";
}
int main(){
    f();
    return 0;
}