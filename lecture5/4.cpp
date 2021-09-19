#include <iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //cout<<s.size()<<endl;
    for(int i=0; i<s.size(); ++i){
        //for(int i=0; i<s.lenght(); ++i)
        cout<<s[i]<<endl;
    }
    return 0;
}