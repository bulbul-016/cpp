#include <iostream>
using namespace std;
int f(string s, int i, int m){
    if(i==s.size()) return m;
    if((s[i]-'0')>=m) m=s[i]-'0';
    return f(s, i+1,m);
}
int main(){
    string s;
    cin>>s;
    
    cout<<f(s,0,-19999);
    return 0;
}