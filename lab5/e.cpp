#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int j=0;
    int t=0;
    for(int i=0; i<a.size(); i++){
        if(i%2==0){
            j=j+a[i];
        } else t=t+a[i];   
    } 
    if(t==j){ 
        cout<<"YES";
        }
    else{ 
        cout<<"NO";
        }
    return 0;
}