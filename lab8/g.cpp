#include <iostream>
#include <vector>
using namespace std;
void f(){
    int n,x;
    cin>>n;
    int k=0;
    vector<int> v;
    for(int i=0; i<n; ++i){
        cin>>x;
        v.push_back(x);
    }   
    int l;
    cin>>l;
    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        for(int i=2; i<=(*it)-1; i++){
            if((*it)>=l && (*it)%i!=0){
                    k=k+1;
            }
        }
    }
    cout<<k;
    
}
int main(){
    f();
    return 0;
}