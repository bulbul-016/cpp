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
    cout<<s.size();
}
int main(){
    f();
    return 0;
}