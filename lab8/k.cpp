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
    reverse(v.begin(), v.end());
    
    int w; cin>>w; int c=0; int sum=0;
    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        sum=sum+(*it); c++;
        if(c==w){break;}
    } cout<<sum;

}
int main(){
    f();
    return 0;
}