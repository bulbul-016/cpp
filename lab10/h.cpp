#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int>v;
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        v.push_back(a[i]);
    }
    vector<int>::iterator it = unique (v.begin(), v.end()); 
    vector<int>::iterator it2;
    do{ for (it2=v.begin(); it2!=it; ++it2){
        cout<< *it2<<" ";
        } cout<<endl;
    }while(next_permutation(v.begin(),it));
    return 0;
}