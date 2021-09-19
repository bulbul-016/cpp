#include <iostream>
#include <sstream>
using namespace std;
int main(){
    stringstream s;
    //cout<<5<<endl;
    s<<8<<endl;
    int x;
    s>>x;
    cout<<s.str();
    cout<<x*x;
    return 0;
}