#include <iostream>
using namespace std;
void f(){
    string s;
    cin>>s;
    int w=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]>='0' && s[i]<='9'){
            w=w+(s[i]-'0');
        }
    }
    cout<<w;
    
}
int main(){
    f();
    return 0;
}