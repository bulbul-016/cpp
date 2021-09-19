#include <iostream>
#include <map>
using namespace std;
void f(){
    multimap<string, int> mm;
    mm.insert(make_pair("banana", 5));
    mm.insert(make_pair("apple", 6)); 
    mm.insert(make_pair("zet", 6)); 
    mm.insert(make_pair("apple", 9));
    mm.insert(make_pair("apple", 4));

    string s;
    cin>>s;
    
    pair<multiset<string> :: iterator, multiset<int> :: iterator> res=ms.equal_range(x);
    
    int s=0;
    for(multiset<string> :: iterator it=mm.begin(); it!=mm.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
int main(){
    f();
    return 0;
}