#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int w=1;
    string s;
    cin>>s;
    sort(begin (s), end (s));
    for(int i=0; i<s.size(); ++i){
        if(s[i]==s[i+1]){
            w++;
            break;
    }
        } 
    cout<<s[i]<<':'<<" "<<w<<endl; 
    return 0;
}