#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void f(){
    int n,x;
    cin>>n;
    int m;
    cin>>m;
    vector<int> v;
    for(int i=0; i<n; ++i){
        cin>>x;
        v.push_back(x); 
        
    }
    sort(v.begin(), v.end());
    int cnt=0;
    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v.size(); ++j){
            if(v[i]+v[j]==m){
                cnt++;
            } 
        }
    }
    if(cnt==0) cout<<"NO";
    else cout<<"YES";
    
}

int main(){
    f();
    return 0;
}