#include <iostream>
#include <vector>
using namespace std;
int arr[111111], brr[111111];
int main () {
    int n, m;
    cin>>n;
    for(int i=1; i<=n; i++) {
        cin>>arr[i];
    }
    cin>>m;
    for(int i=1; i<=m; i++) {
        cin>>brr[i];
    }
    int l=1; int r=1;
    vector<int>v;
    while(l<=n && r<=m){
        if(arr[l]<=brr[r]) v.push_back(arr[l++])
        else v.push_back(brr[r++])
    }
    while(l<=n) v.push_back(arr[l++]); 
    while(r<=m) v.push_back(brr[r++]);
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    } cout<<endl;
    return 0;
}











// 5
// 4 5 6 7 10
// 5
// 2 4 6 7 8

// 2 4 4 5 6 6 7 7 8 10