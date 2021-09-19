#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        s[i]=s[i]+n;
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]<='Z') cout<<char(s[i]);
        else{
            cout<<char(s[i]-26);
        }
    }
    return 0;
}