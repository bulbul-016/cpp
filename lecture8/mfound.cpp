#include <iostream>
#include <map>
using namespace std;
void f(){
    map<string, int> m;
    string w;
    while(1){
        cin>>w;
        if(w=="end") break;
        m[w]=m[w]+1;
    }
    int n;
    cin>>n;
     bool fo=false;
    map<string,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        if((*it).second==n){
            cout<<(*it).first;
            fo=true;
            break;
        }
    }
    if(!fo){
        cout<<"not found";
    }
}
int main(){
    f();
    return 0;
}
// test1 test test test2 end
// 2
// test