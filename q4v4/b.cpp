#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int n; cin>>n;
    s.erase(0,n);
    cout<<s;
    return 0;
}
// John Snow is the only king of North.
// 5
// Snow is the only king of North.