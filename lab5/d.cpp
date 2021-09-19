#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    string b;
    b=a;
    reverse(begin(a), end(a));
    if(a==b) cout<<"YES";
    else cout<<"NO";
    return 0;
}