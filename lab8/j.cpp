#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void f(){
    int n,x;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; ++i){
        cin>>x;
        v.push_back(x); 
    }   
    sort(v.begin(), v.end());
    vector<int> ::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<(*(v.begin()+n-1))-(*v.begin())<<" ";
        break;
    }
}
int main(){
    f();
    return 0;
}