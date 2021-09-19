#include <iostream>
using namespace std;
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    if(b*n>=100) cout<<a*n+((b*n)/100)<<" "<<((b*n)%100);
    else cout<<a*n<<" "<<b*n;
    return 0;
}