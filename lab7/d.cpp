#include <iostream>
using namespace std;
int f(string s, int i){
    if(i==s.size()) return 0;
    return f(s, i+1)+(s[i]-'0');
}
int main(){
    string s;
    cin>>s;
    cout<<f(s,0);
    return 0;
}