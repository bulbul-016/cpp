#include <iostream>
using namespace std;
int main(){
    string s; cin>>s;
    string f; cin>>f;
    int c=0; int p=0;
    for(int i=0; i<s.size(); i++){
        int fp=s.find(f,p);
        if(fp!=string::npos){
            p=fp+1;
            c++;
            cout<<c;
        }

    } 
    return 0;
}
// abcqwabce
// abc
// 2