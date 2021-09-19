#include <iostream>
using namespace std;
int c=-1;
int f(string s, int i){
    if(i>s.size()) return 0;
    if((s[i])%2==0){
        c++;
        return f(s, i+1);
    }
    return f(s, i+1);
}
int main(){
    string s;
    cin>>s;
    f(s,0);
    cout<<c;
    return 0;
}