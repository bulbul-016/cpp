#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int sumv(vector<int> t){
    int sum=0;
    for(int i=0;i<t.size();i++){
        sum+=t[i];
    } return sum;
}
bool msort(vector<int> a, vector<int> b){
    if(sumv(a)==sumv(b)){
        if(a.size()==b.size()){
            if(a[0]==b[0]) return true;
            return a[0] < b[0];
        }  return a.size() < b.size();
    } return sumv(a) < sumv(b);
}
int main(){
    int n; cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        int m; cin>>m;
        vector<int> v2;
        for(int j=0;j<m;j++){
            int x; cin>>x;
            v2.push_back(x);
        } v.push_back(v2);
    }
    sort(v.begin(),v.end(),msort);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        } cout<<endl;
    }   
    return 0;   
}
