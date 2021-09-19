#include <iostream>
#include <map>
using namespace std;
void f(){
    int n; cin>>n; int a[n];
    map<int,int> m;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]]++;
    }
    int c=0;
     map<int,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        if((*it).second >1) c++;
    }
    cout<<c;
}
int main(){
    f();
    return 0;
}