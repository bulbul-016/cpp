#include <iostream>
#include <set>
using namespace std;
typedef multiset<int> :: iterator m;
int main(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(16);
    ms.insert(16);
    ms.insert(16);
    ms.insert(2);
    int x;
    cin>>x;
    pair<m,m> res=ms.equal_range(x);
    for(m it=res.first; it!=res.second; ++it){
        cout<<*it<<" ";
    } 
    return 0;
}
// 16
// 16 16 16