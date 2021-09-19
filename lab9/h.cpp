#include <iostream>
#include <map>
#include <string>
using namespace std;
void f(){
    int n; cin>>n;
    map<string, int> m;
    for(int i=0; i<n; i++){
        string s; cin>>s;
        if(m[s]==0) m[s]=i+1;
    }
    map<string,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
int main(){
    f();
    return 0;
}