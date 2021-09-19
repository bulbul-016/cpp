#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<char> s;
    string str;
    cin>>str;
    bool res=true;
    for(int i=0; i<str.size(); i++){
        if(str[i]=='('){
            s.push('(');
        }else if(str[i]==')'){
            if(!s.empty()){
                s.pop();
            }else{
                res=false; break;
            }
        }
    }
    if(s.empty() && res==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}