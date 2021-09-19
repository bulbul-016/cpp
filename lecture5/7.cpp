#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    size_t start, len;
    cin>>start,len; 
    cout<<s.substr(start, len)<<endl;
    return 0;
}
