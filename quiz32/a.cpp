#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<int,int> m;
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        int x;
        cin>>x;
        if(m.find(x)==m.end()){
            m[x]=1;
        }else{
            m[x]++;
        }
    }
    int l;
    cin>>l;
    vector<int>v;
    for (int i=0; i<l; i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    map<int,int>::iterator it;
    for (int i=0; i<v.size(); i++){
        cout<<m[v[i]]<<endl;
    }
}
// input
// 10
// 1 2 1 2 5 6 1 7 15 1
// 5
// 1
// 13
// 7
// 2
// 1
// output
// 4
// 0
// 1
// 2
// 4