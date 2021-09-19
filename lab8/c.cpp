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
void f(){
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; ++i){
        cin>>x;
        v.push_back(x); 
        
    }
    int l,m;
    cin>>l>>m;
    reverse(v.begin()+l, v.begin()+m+1);
     print(v);  
}

int main(){
    f();
    return 0;
}