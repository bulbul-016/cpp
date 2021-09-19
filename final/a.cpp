#include <iostream>
#include <algorithm>
using namespace std;
void p(string x){
    int cnt;
    for(int i=1; i<=x.size(); i++){
        reverse(begin(x), end(x));
        for(int j=1; j<=x.size(); j++){
            if(x[i]==x[j]){
                cnt++;
            } 
        }
        cout<<cnt;
    }
}
int main(){
    string s;  int cnt=0; string x="";
    // freopen("in.txt", "r", stdin);
    getline(cin,s);
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' ')x+=s[i];
        if(s[i]==' '){
            p(x);
            x="";
        } 
    }
   return 0;
}