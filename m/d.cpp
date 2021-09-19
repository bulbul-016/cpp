#include <iostream>
using namespace std;
int main(){
    string s; char x; cin>>x>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=x)cout<<s[i];
    }
    return 0;
}