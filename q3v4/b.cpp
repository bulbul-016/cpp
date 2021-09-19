#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void f(){
    string s;
    cin>>s;
    string st;
    cin>>st;
    vector<int> v;
    for(int i=0; i<s.size(); i++){
        v.push_back(s[i]);
    }
    vector<int> vt;
    for(int i=0; i<st.size(); i++){
        vt.push_back(st[i]);
    }
    sort(v.begin(), v.end());
    sort(vt.begin(), vt.end());
    if(v.size()!=vt.size()) cout<<"No";
    else{
        for(int i=0; i<v.size(); i++){
            if(v[i]!=vt[i]){
                cout<<"No"; break;
            }
        }
        cout<<"Yes"; 
    }
}
int main(){
    f();
    return 0;
}