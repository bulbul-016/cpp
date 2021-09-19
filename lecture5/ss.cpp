#include <iostream>
#include <sstream>
using namespace std;
int main(){
    stringstream s;
    //cout<<5<<endl;
    s<<5<<endl;
    int x;
    s>>x;
    cout<<x*x;
    return 0;
}
