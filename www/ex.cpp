#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s; 
    for(int i=0; i<=s.size(); i++){
        cout<<s.substr(0,i)<<endl;
    }
    
    return 0;
}
// abcd

// a
// ab
// abc
// abcd
