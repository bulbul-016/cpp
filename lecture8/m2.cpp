#include <iostream>
#include <map>
using namespace std;
void f(){
    map<string, int> m;
    m["week"]=2;
    m.insert(make_pair("apple", 5));
    m.insert(make_pair("apple1", 6)); //ignor
    m["orange"]=2;
    
    map<string,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        cout<<(*it).first<<"-"<<(*it).second<<endl;
    }
    cout<<m["apple"]; //apple's key -5
}
int main(){
    f();
    return 0;
}