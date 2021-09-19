#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<string> v;
    vector<int> c;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        string s; int x;
        cin>>s>>x;
        v.push_back(s);
        c.push_back(x);
    }
    sort(v.begin(),v.end());
    sort(c.begin(),c.end());
    
    vector<string> :: iterator it;
    vector<int> :: iterator it2;
    for(it=v.begin(),it2=c.begin();it2!=c.end(),it!=v.end();it++,it2++){
        cout<<*it<<" "<<*it2<<endl;
    }
    return 0;
}