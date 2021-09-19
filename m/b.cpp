#include <iostream>
using namespace std;
int main(){
    string s; cin>>s; string s2=""; 
    for(int i=0; i<5; i++){
        s2+=s[i];
    }string s1="";
    for(int i=0; i<4; i++){
        s1+=s[i];
    }
    if(s1=="8717"){
        cout<<"Astana";
    }
    else if(s2=="87272" || s2=="87273")cout<<"Almaty";

    return 0;
}