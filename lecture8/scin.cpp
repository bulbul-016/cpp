#include <iostream>
#include <set>
using namespace std;
void f(){
    set<int> s;
    int x;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i){
        cin>>x;
        s.insert(x);
    } 
    set<int> :: iterator it;
    for(it=s.begin(); it!=s.end(); ++it){
        cout<<*it<<" ";
    } cout<<endl;
   set<int> :: reverse_iterator rit;
    for(rit=s.rbegin(); rit!=s.rend(); ++rit){
        cout<<*rit<<" ";
    }
}
int main(){
    f();
    return 0;
}