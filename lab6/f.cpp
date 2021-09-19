#include <iostream>
using namespace std;
void f(){
    string s;
    getline(cin,s);
    int w;
    cin>>w;
    int c=0;
    int i=0;
    while(cin>>s[i]){
        if(int(s[i])==32) break;
        if((48<=(int(s[i]))) && (57>=(int(s[i])))){
            c++;
        } i++;
    }
    if(c==w){cout<<"YES";}
    else{cout<<"NO";}
}
int main(){
    f();
    return 0;
}