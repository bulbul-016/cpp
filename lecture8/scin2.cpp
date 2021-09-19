#include <iostream>
#include <set>
using namespace std;
void f(){
    set<int> s;
    int x;
    while(1){
        cin>>x;
        if(x==0) break;
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it=s.begin(); it!=s.end(); ++it){
        cout<<*it<<" ";
    } cout<<endl<<s.size(); //размер 
    cout<<endl<<*s.begin()<<" "<<*s.rbegin(); //самый первый и последний
   
}
int main(){
    f();
    return 0;
}