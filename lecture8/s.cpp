#include <iostream>
#include <set>
using namespace std;
void f(){
    set<int> s;
    for(int i=10; i>=1; i--){
        cout<<i<<" ";
        s.insert(i);
    } cout<<endl;
    set<int> :: iterator it;
    for(it=s.begin(); it!=s.end(); ++it){
        cout<<*it<<" ";
    } 
    cout<<endl<<*s.begin()<<" "<<*s.rbegin(); //самый первый и последний
    cout<<endl<<s.size(); //размер
}
int main(){
    f();
    return 0;
}