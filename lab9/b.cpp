#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void f(){
    vector<int> v;
    vector<int> v2;
    int n; cin>>n; int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    } 
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            v.push_back(a[i]);
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            v2.push_back(a[i]);
        }
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    sort(v2.begin(), v2.end());
    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }

}
int main(){
    f();
    return 0;
}