#include <iostream>
using namespace std;
int main(){
    string s; cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            char c=s[i]+32;
            cout<<c;
        }
        else if(s[i]>='a' && s[i]<='z'){
            char c=s[i]-32;
            cout<<c;
        }
    }
    return 0;
}
// aaAAbbCC
// AAaaBBcc