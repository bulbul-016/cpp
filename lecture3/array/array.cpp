#include <iostream>
using namespace std;
int main(){
    int a[10];//init
    for(int i=0; i<10;++i){
    a[i]=i;//set
    }
    for(int i=0; i<10;i++){
    cout << a[i] << " ";//get
    }
    return 0;
}