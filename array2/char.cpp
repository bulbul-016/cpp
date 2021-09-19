#include <iostream>
using namespace std;
int main(){
    //ascii-code.com
    //ASCII Code
    //cout<< char(90);
    //cout<< int('Z');
    for( int i=0; i<26; ++i){
        cout<<char(int('A')+i);
    }
    for( int i=0; i<26; ++i){
     cout<<char(65+i);
     }
    return 0;
}