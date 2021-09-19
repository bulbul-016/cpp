#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool f(int x){
    if(x==0) return false;
    if(x==1) return false;
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0) return false;
    } 
    return true;
}
int main(){
    int n; cin>>n; 
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(abs(x));
    }
    int r=count_if(v.begin(), v.end(),f);
    cout<<r;
    return 0;
}
