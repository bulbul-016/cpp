#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a;
    cin>>a;
    reverse(begin(a), end(a));
    cout<<a;
    return 0;
}