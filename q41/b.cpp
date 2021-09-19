#include <iostream>
#define s string
#define f for
using namespace std;
int main(){
    s ss; cin>>ss; int n=26; 
    f(int i=0; i<ss.size(); i++){
        int j=(int(ss[i])-96);
        ss[i]=char(n-j+1+96);
        cout<<ss[i];
    }
    return 0;
}
// crystal
// xibhgzo
//a=z
//z=a