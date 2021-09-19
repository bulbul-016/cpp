#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n; cin>>n; int m; cin>>m; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    reverse(v.begin(), v.end());
    rotate(v.begin(),v.begin()+m+1, v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}