#include <iostream>
using namespace std;
string toBinary(int n, string res){
    if(n==0) return res;
    if(n%16<=9){
        return toBinary(n/16, char(n%16+48)+res);
    }
    if(n%16>=10){
        return toBinary(n/16, char(n%16+55)+res);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<toBinary(n,"");
    return 0;
}
//0 0
// 1 1
// ...
// 10 A
// 11 B