#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int m=int(s[0]);
    for(int i=1; i<s.size(); ++i){
        if(m<=(int(s[i]))){
            m=int(s[i]);
        }
    }   
    cout<<char(m);
    return 0;
}