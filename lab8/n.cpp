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
        if(x%2!=0){s.insert(x);}
    } 
    set<int> :: iterator it;
    for(it=s.begin(); it!=s.end(); ++it){
        cout<<*it<<" ";
    }  
}
int main(){
    f();
    return 0;
}