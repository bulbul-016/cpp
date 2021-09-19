#include <iostream>
using namespace std;
int main(){
    string s,x;
    cin>>s>>x;
    int cnt=0;
    size_t p=0;
    for( int i=0; i<s.size(); ++i){
        size_t fp=s.find(x,p);
        if(fp!=string::npos){
            p=fp+1;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}