#include <iostream>
using namespace std;
int main(){
    string s; cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' && s[i+1]=='1'){
            s[i]=s[i]+'0'-'1';
            s.erase(i+1,1);
        }
    }
    cout<<s;
    return 0;
}
    