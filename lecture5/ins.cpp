#include <iostream>
#include <string>
using namespace std;
int main(){
    string str = "my name ";
    string str2 = "dog is";
    string str3 = "beauty";

    str.insert(8,str2,4,2);
    cout<< str <<endl;
    return 0;
}