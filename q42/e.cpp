/*
as--dqwe----ee

as*dqwe*ee
*/
#include <iostream>
using namespace std;
int main(){
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='-'){
            cout<<s[i];
        }
        if(s[i]=='-' && s[i+1]!='-'){
            cout<<'*';
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            
        }
    }
    return 0;
}