#include <iostream>
#include <set>
using namespace std;
int a[1111], b[111111];
set<int>s;
int main () {
    int n,m;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    cin>>m;
    for(int i=1; i<=m; i++)
        cin>>b[i];
    for(int i=1; i<=n; i++) 
        for(int j=1; j<=n; j++) {
            if(i==j)continue;
            s.insert(a[i] + a[j]);
        }
    for(int i=1; i<=m; i++) {
        if(s.count(b[i])) {
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}






// 9
// 1 1 7 7 8 10 10 10 8
// 6
// 8 18 30 20 1 16
// YES
// YES
// NO
// YES
// NO
// YES
