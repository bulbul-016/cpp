#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){ 
        cin>>a[i];
    }
    for(int i=0; i<n; i++){ 
        v.push_back(a[i]+a[i+1]);
    }
    sort(v.begin(), v.end());
    cout<<v[0];
    


    return 0;
}