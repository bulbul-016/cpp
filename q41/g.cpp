#include <iostream>
#define I int
#define S string
using namespace std;
void f(){
    I n; cin>>n;
    I a; cin>>a;
    I b; cin>>b;
    S s; cin>>s;
    I c=0; I t=0;
    for( I i=0; i<n;i++){ 
        if(s[i]>='a' && s[i]<= 'z') c++;
        if(s[i]>='A' && s[i]<= 'Z') t++;
    }
    if(t*a<c*b)cout<<t*a;
    else if(c==0 or t==0) cout<<0;
    else cout<<c*b;    
}
int main() {
    f();
    return 0;
}