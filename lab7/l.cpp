#include <iostream>
using namespace std;
string f(string s, int i){
    if(s[0]==s[(s.size()-1)]) return "Yes";
    else return "No";
    return f(s, i+1);
}
int main(){
    string s;
    cin>>s;
    cout<<f(s,0);
    return 0;
}