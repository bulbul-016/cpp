#include <iostream>
#include <set>
using namespace std;
void f(){
    set<int> s;
    int x;
    int n;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; ++i){
        cin>>x;
        s.insert(x);
    } 
    set<int> :: iterator it;
    for(it=s.begin(); it!=s.end(); ++it){
        sum=sum+(*it);
    } 
    cout<<sum;
}
int main(){
    f();
    return 0;
}