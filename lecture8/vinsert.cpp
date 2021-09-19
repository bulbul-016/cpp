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
    v.insert(v.begin()+2,16);
    v.insert(v.end()-1,12);
    // v.begin()+3 -position
    // 3-element
     print(v);  
}

int main(){
    f();
    return 0;
}