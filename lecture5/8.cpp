#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    size_t start;
    cin>>start; 
    cout<<s.substr(start)<<endl;
    return 0;
}