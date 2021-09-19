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
    
    multimap<string,int> :: iterator it;
    for(it=mm.begin(); it!=mm.end(); ++it){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
int main(){
    f();
    return 0;
}
// apple 6
// apple 9
// apple 4
// banana 5
// zet 6

// apple-key