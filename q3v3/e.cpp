#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> v){
     vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); ++it){
        cout<<*it<<" ";
    }
}
void prin(vector<int> v){
     vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); ++it){
        cout<<*it<<" ";
    }
}
void f(){
    int n,x;
    cin>>n;
    int l;
    cin>>l;
    vector<int> v;
    for(int i=0; i<n; ++i){
        cin>>x;
        v.push_back(x); 
        
    }
    sort(v.begin()+l+1, v.end());
    reverse(v.begin()+l+1, v.end());
    print(v);
    sort(v.begin(), v.begin()+l-1);
    prin(v);
}
int main(){
    f();
    return 0;
}