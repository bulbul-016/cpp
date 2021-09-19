#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int v=0;
    for(int i=1; i<s.size(); ++i){
        if((int(s[i-1]))>(int(s[i]))){
            v++;
        }
    }  
    if(v==0) cout<<"YES";
    else cout<<"NO";  
    return 0;
}