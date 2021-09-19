#include <iostream>
#include <string>
using namespace std;
int main(){
    string w;
    int a,b;
    cin>>w;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        cout<<w[i];
    }
    return 0;
}