#include <iostream>
using namespace std;
int main(){
    string s; cin>>s; int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            continue;
        }
        if(s[i]>=65 && s[i]<=90){
            continue;
        }
        if(s[i]>=97 && s[i]<=122){
            continue;
        }
        else{
            cnt++;
        }
        
    } cout<<cnt;
    return 0;
}