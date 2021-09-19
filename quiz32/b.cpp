#include <iostream>
using namespace std;
int f(){
    char a[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
           a[i][j]='0';
        }
    } 
    int n;
    cin>>n; 
    char w,v;  
    for(int i=0; i<n; i++){
            cin>>w>>v;
            a[w-'A'][v-'1']='*';
    }
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
           cout<<a[i][j];
        }
        cout<<endl;
    } 
}

int main(){
    f();
    return 0; 
}
    