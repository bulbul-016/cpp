#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    cin>>a;
    int l;
    cin>>l;
    int m=0;
    for(int i=0; i<s.size(); ++i){
        if(s[s.size()-1]==s[i]){
            m++;
        }
    } 
    if(l==m) cout<<"YES";
    else cout<<"NO"; 
    return 0;
}