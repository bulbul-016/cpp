#include <iostream>
using namespace std;
string s, res;
int mx=0;
int main (){    
freopen("f.txt", "r", stdin);
while(cin>>s){
    if (s.size () >= mx) {
    mx = s.size ();
    res = s;
    }
}
cout << res;
return 0;
}