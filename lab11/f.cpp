#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int n,m,c; cin>>n>>m>>c;
    int a=min(n,m); 
    for(int i=1; i<=a; i++){
        if(n%i==0 && m%i==0){
            v.push_back(i);
        }
    }
    if(n==1 || m==1){
        cout<<1;
    }else cout<<v[v.size()-c];

    return 0;
}