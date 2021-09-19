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
    map<string,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        cout<<(*it).first<<"-"<<(*it).second<<endl;
    }
    cout<<m["ma"]; //если нет выводит 0 
}
int main(){
    f();
    return 0;
}
// get men first day day first men end
// day-2
// first-2
// get-1
// men-2