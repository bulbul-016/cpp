#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int> s;
    int n; cin>>n; int c=0;
    for(int i=0; i<n; i++){
        int t; cin>>t;
        s.insert(t);
        c++;
    }
    if(s.size()==n) cout<<"YES";
    else cout<<"NO";


    return 0;
}