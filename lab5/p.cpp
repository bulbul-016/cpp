#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int m=0;
    for(int i=0; i<s.size(); ++i){
        if(s[i]==char(122)){
            m=97;
            cout<<char(m);
        }
        else {m=int(s[i])+1;
        cout<<char(m);}
    }   
    
    return 0;
}