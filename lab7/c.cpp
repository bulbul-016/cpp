#include <iostream>
using namespace std;
bool find(int * a, int n, int x){
    bool res=false;
    for(int i=0; i<n; ++i){
        if(a[i]==x){
            res=true;
            break;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    int x;
    cin>>x;

    if(find(a,n,x)){
        cout<<"Yes";
    }else cout<<"No";
}