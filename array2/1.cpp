#include <iostream>
using namespace std;
int main(){
    int a[10][10];
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cin>>a[i][j];
        }
    }    
    for(int i=0; i<10; i=i+2){
        for(int j=0; j<10; j=j+2){
            cout<<a[i][j]<<" ";
        }
        cout << endl;
    }    
 return 0;
}