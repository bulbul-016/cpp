#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    multimap<int,int> m;
    vector<int> v;
    int n; cin>>n; int a[n];
    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<n; i++){
        m.insert(make_pair(a[i+1]-a[i],i));
    }
    multimap<int,int> :: iterator it;
    for(it=m.begin(); it!=m.end(); ++it){
        v.push_back((*it).second);
    } 
    if(v[0]==v[v.size()-1]){
        cout<<v[0];
    }else{
        cout<<v[v.size()-1];
    }
    
    return 0;
}