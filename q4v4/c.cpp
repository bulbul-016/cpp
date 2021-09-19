#include <iostream>
using namespace std;
int main(){
    int n,m; cin>>n>>m; 
    int mn=111111; int mx=-1111;
    for(int j=0; j<m; j++){
        int t; cin>>t;
        if(t>mx) mx=t;
        if(t<mn) mn=t;
    }
    if(mx-mn<=n)cout<<"YES";
    else cout<<"NO";
    return 0;
}
// 9
// 5
// 1 2 3 4 5
// YES