#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool f(int x){
    if(x%2==0) return true;
    return false;
}
int main(){
    int n; cin>>n; int a[n];
    vector<int> v;
    for(int i=0; i<n; i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    int r=count_if(v.begin(), v.end(),f);
    cout<<r;
    return 0;
}