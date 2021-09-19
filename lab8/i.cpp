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
    int z;
    cin>>z;
    if(s.find(z)==s.end()){
        cout<<"No";
    }else{
        cout<<"Yes";
    }
}
int main(){
    f();
    return 0;
}